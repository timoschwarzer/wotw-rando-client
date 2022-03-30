﻿public struct RGB {
  public float R;
  public float G;
  public float B;

  public bool Equals(RGB rgb) {
    return R == rgb.R && G == rgb.G && B == rgb.B;
  }
}

public struct HSL {
  public int H;
  public float S;
  public float L;

  public bool Equals(HSL hsl) {
    return H == hsl.H && S == hsl.S && L == hsl.L;
  }

  private float hueToRGB(float v1, float v2, float vH) {
    if (vH < 0)
      vH += 1;

    if (vH > 1)
      vH -= 1;

    if (6 * vH < 1)
      return v1 + (v2 - v1) * 6 * vH;

    if (2 * vH < 1)
      return v2;

    if (3 * vH < 2)
      return v1 + (v2 - v1) * (2.0f / 3 - vH) * 6;

    return v1;
  }

  public RGB ToRGB() {
    if (S == 0)
      return new RGB { R = L, G = L, B = L };
    else {
      float hue = (float)H / 360;
      float v2 = L < 0.5 ? L * (1 + S) : L + S - L * S;
      float v1 = 2 * L - v2;

      return new RGB {
        R = hueToRGB(v1, v2, hue + 1.0f / 3),
        G = hueToRGB(v1, v2, hue),
        B = hueToRGB(v1, v2, hue - 1.0f / 3)
      };
    }
  }
}
