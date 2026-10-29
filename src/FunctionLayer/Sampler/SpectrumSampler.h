#pragma once

#include "Sampler.h"

class SpectrumSampler : public Sampler {
public:
    SpectrumSampler() = delete;
    ~SpectrumSampler() override = default;
    SpectrumSampler(int64_t _spp, int _nDim) : Sampler(_spp, _nDim) {
    }

    void startPixel(const Point2i &_pixelPosition) override {
    }

    void nextSample() override {
    }

    double sample1D() override {
        return rng();
    }

    Point2d sample2D() override {
        return Point2d{rng(), rng()};
    }

    std::unique_ptr<Sampler> clone(int seed) const override {
        return std::unique_ptr<Sampler>(new SpectrumSampler(samplesPerPixel, nDimensions));
    }

protected:
private:
};
