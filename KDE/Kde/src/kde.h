#pragma once

#include <string>
#include <vector>
#include "bs_thread_pool/BS_thread_pool.hpp"

#define CPUKDE

namespace kde {
/// ���ܶȹ��Ƹ������޵������ƶ��������ݵķֲ�
/// ����һά��ɢ���ݣ������һά�������ݷֲ�
/// ���ڶ�ά��ɢ���ݣ�����Ƕ�ά�ռ������ݵ������ֲ�
/// ��ˣ�����������ֲ����п��ӻ������ɵõ����ں��ܶȹ��Ƶ�����ͼ��ʽ

class Point {
 public:
  Point() : lon(0.0), lat(0.0) {}
  Point(float lon, float lat) : lon(lon), lat(lat) {}

  float lon;
  float lat;
};

class Rect {
 public:
  Rect() : top(-INFINITY), right(-INFINITY), bottom(INFINITY), left(INFINITY) {}
  Rect(float top, float right, float bottom, float left)
      : top(top), right(right), bottom(bottom), left(left) {}

  float top;
  float right;
  float bottom;
  float left;
};

struct KDEResult {
  std::vector<std::vector<float>> estimate;
  float min;
  float max;
  int cols;
  int rows;

  void Init(int p_rows, int p_cols) {
    min = INFINITY;
    max = -INFINITY;
    cols = p_cols;
    rows = p_rows;

    for (int i = 0; i < rows; i++) {
      std::vector<float> item;
      for (int j = 0; j < cols; j++) {
        item.push_back(0);
      }
      estimate.push_back(item);
    }
  }
};

std::pair<std::vector<Point>, Rect> Coordinates(const std::string& filepath);

/// @brief �˺���
/// @param t
/// @return
float kernel(float t);

/// @brief ����
/// @param pts ���� POI ��
/// @param avePt ƽ������
/// @return ��������
float h(std::vector<Point>& pts, Point& avePt);

/// @brief ƽ������
/// @param pts ���� POI ��
/// @return
Point ave(std::vector<Point>& pts);

float Dist(Point& p1, Point& p2);

float SD(std::vector<Point>& pts, Point& avePt);

float Dm(std::vector<Point>& pts, Point& avePt);

KDEResult* CPUKde(std::vector<Point>& pts, Rect& rect, int width, int height);
//KDEResult* CPUKdeMultiThread(std::vector<Point>& pts, Rect& rect, int width,
//                             int height);
//
//KDEResult* GPUKde(std::vector<Point>& pts, Rect& rect, int width, int height);
//KDEResult* GPUKdeMultiThread(std::vector<Point>& pts, Rect& rect, int width,
//                             int height);

KDEResult* Calculate();
}  // namespace kde