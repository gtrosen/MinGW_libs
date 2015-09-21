// DO NOT EDIT!
// Generated automatically from /root/mxe-octave/tmp-stable-octave/octave-3.8.1/liboctave/numeric/Quad-opts.in.

#if !defined (octave_Quad_options_h)
#define octave_Quad_options_h 1

#include <cfloat>
#include <cmath>



class
Quad_options
{
public:

  Quad_options (void)
    : x_absolute_tolerance (),
      x_relative_tolerance (),
      x_single_precision_absolute_tolerance (),
      x_single_precision_relative_tolerance (),
      reset ()
    {
      init ();
    }

  Quad_options (const Quad_options& opt)
    : x_absolute_tolerance (opt.x_absolute_tolerance),
      x_relative_tolerance (opt.x_relative_tolerance),
      x_single_precision_absolute_tolerance (opt.x_single_precision_absolute_tolerance),
      x_single_precision_relative_tolerance (opt.x_single_precision_relative_tolerance),
      reset (opt.reset)
    { }

  Quad_options& operator = (const Quad_options& opt)
    {
      if (this != &opt)
        {
          x_absolute_tolerance = opt.x_absolute_tolerance;
          x_relative_tolerance = opt.x_relative_tolerance;
          x_single_precision_absolute_tolerance = opt.x_single_precision_absolute_tolerance;
          x_single_precision_relative_tolerance = opt.x_single_precision_relative_tolerance;
          reset = opt.reset;
        }

      return *this;
    }

  ~Quad_options (void) { }

  void init (void)
    {
      x_absolute_tolerance = ::sqrt (std::numeric_limits<double>::epsilon ());
      x_relative_tolerance = ::sqrt (std::numeric_limits<double>::epsilon ());
      x_single_precision_absolute_tolerance = ::sqrt (std::numeric_limits<float>::epsilon ());
      x_single_precision_relative_tolerance = ::sqrt (std::numeric_limits<float>::epsilon ());
      reset = true;
    }

  void set_options (const Quad_options& opt)
    {
      x_absolute_tolerance = opt.x_absolute_tolerance;
      x_relative_tolerance = opt.x_relative_tolerance;
      x_single_precision_absolute_tolerance = opt.x_single_precision_absolute_tolerance;
      x_single_precision_relative_tolerance = opt.x_single_precision_relative_tolerance;
      reset = opt.reset;
    }

  void set_default_options (void) { init (); }

  void set_absolute_tolerance (double val)
    { x_absolute_tolerance = val; reset = true; }

  void set_relative_tolerance (double val)
    { x_relative_tolerance = val; reset = true; }

  void set_single_precision_absolute_tolerance (float val)
    { x_single_precision_absolute_tolerance = val; reset = true; }

  void set_single_precision_relative_tolerance (float val)
    { x_single_precision_relative_tolerance = val; reset = true; }
  double absolute_tolerance (void) const
    { return x_absolute_tolerance; }

  double relative_tolerance (void) const
    { return x_relative_tolerance; }

  float single_precision_absolute_tolerance (void) const
    { return x_single_precision_absolute_tolerance; }

  float single_precision_relative_tolerance (void) const
    { return x_single_precision_relative_tolerance; }

private:

  double x_absolute_tolerance;
  double x_relative_tolerance;
  float x_single_precision_absolute_tolerance;
  float x_single_precision_relative_tolerance;

protected:

  bool reset;
};

#endif
