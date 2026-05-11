# Roadmap - Singularity

---

## v0.3.0 - Foundation

### Textures & Materials
- [x] 2D texture loading
- [x] Texture descriptor sets and samplers
- [x] Mipmap generation
- [x] Texture filtering 
- [x] Texture array / atlas support
- [x] Normal mapping (tangent space normals)
- [x] Parallax occlusion mapping (POM)
- [x] Relief mapping

## v0.3.5 - Architecture

### Architecture
- [ ] ECS core (Entity, Component, System)
- [ ] Component managers (Transform, Mesh, Camera)
- [ ] System scheduling (Awake, Update, LateUpdate)
- [ ] Entity lifecycle management
- [ ] World / Scene graph interface

---

## v0.4.0 - Lighting & Shadows **(Implemented in this fork)**

### Light
- [x] Point light (position, color, intensity, radius)
- [x] Directional light (direction, color, intensity)
- [x] Spotlight (position, direction, cone angle, penumbra)
- [x] Light types enumeration and registry
- [x] Deferred shading G-buffer (position, normal, albedo, emissive)
- [x] Forward+ / tiled rendering fallback
- [x] HDR pipeline (RGB16F framebuffer)
- [x] Tonemapping (ACES filmic)
- [x] Exposure control (auto-exposure, manual)

### Shadows
- [x] Shadow map per light type
- [x] Cascaded Shadow Maps (CSM) - 3-4 cascades
- [x] Cascade splitting (linear, exponential)
- [x] PCF (Percentage Closer Filtering) - 3x3, 5x5 kernel
- [x] Poisson disk sampling for soft shadows
- [x] Shadow cache for static lights
- [x] Shadow map atlas (pack multiple maps)
- [x] Bias / normal offset to reduce acne

### Post-processing
- [x] Post-processing pass framework
- [x] Bloom (threshold, intensity, radius)
- [x] Gaussian blur (separable, dual-pass)
- [x] SSAO (Screen Space Ambient Occlusion)
- [x] SSAO blur and bilateral filter
- [x] Depth of Field (bokeh, circle of confusion)
- [x] Motion blur (velocity buffer)
- [x] Chromatic aberration
- [x] Vignette
- [x] Color grading / LUT

New directories and files added: src/lighting/, src/postfx/, updated shaders.

---

(remaining sections unchanged)