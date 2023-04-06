#pragma once

namespace Bowling
{
  class Frame
  {
    public:
      Frame();
    public:
      void record_ball(int num_pins);
      int total_score() const;
      int strike_count(int roll) const;
      int spare_count(int roll) const;
    private:
      int current_score;
      int num_roll;
  };

  class Game
  {
    public:
      Game();
    public:
      bool is_complete() const;
      int get_score() const;
      void record_ball(int num_pins);
    private:
      int final_score;
  };
}
