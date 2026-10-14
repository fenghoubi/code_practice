//非注释传不了
// //用AI将原图片直接转代码（未修改），可能有部分复制错误
// const int kRockerReturnDelayTime = 2000;//摇臂自动返回前等待的时间
// const int kRockerReturnDuration = 2000;//摇臂返回持续的时间
// const int kRockerNormalVelocity = 300;//摇臂返回时的速度
// //const RockerState last_rocker_state = RockerState::Idle;//用来记录上一轮循环中摇臂的状态
// //不能修改const
// RockerState last_rocker_state = RockerState::Idle;//用来记录上一轮循环中摇臂的状态

// while(true)
// {
//     //获取当前摇臂状态，由外部函数进行输入
//     const RockerState kRockerState = m_rocker_state.load(std::memory_order_relaxed);
//     //记录摇臂状态
//     //if (kRockerState == last_rocker_state) {
//     //相等赋值无意义
//     if (kRockerState != last_rocker_state) {
//         last_rocker_state = kRockerState;
//         m_rocker_state_entered_at = pros::millis();
//     }
//     switch (kRockerState) {
//         case RockerState::Idle: m_rocker.move_velocity(0); break;
//         case RockerState::Up:   m_rocker.move_velocity(kRockerNormalVelocity); break;
//         case RockerState::Down: m_rocker.move_velocity(-kRockerNormalVelocity); break;
//         case RockerState::ReturnDelay:
//             m_rocker.move_velocity(0);
//             //if (pros::millis() - m_rocker_state_entered_at <= kRockerReturnDelayTime) {
//             //于后文相同，大于时初始化
//             if (pros::millis() - m_rocker_state_entered_at >= kRockerReturnDelayTime) {
//                 setRockerState(RockerState::Return);
//             }
//             break;
//         case RockerState::Return:
//             m_rocker.move_velocity(-kRockerNormalVelocity);
//             if (pros::millis() - m_rocker_state_entered_at >= kRockerReturnDuration) {
//                 setRockerState(RockerState::Down);
//             }
//             break;
//         default: break;
//     }
//     //循环延迟（每 10 毫秒循环一次）
//     pros::delay(10);
// }