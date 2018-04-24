// __     __      _____ _____  _____  __  __ _
// \ \   / //\   / ____|  __ \|  __ \|  \/  | |
//  \ \_/ //  \ | |    | |__) | |__) | \  / | |
//   \   // /\ \| |    |  ___/|  ___/| |\/| | |
//    | |/ ____ \ |____| |    | |    | |  | | |____
//    |_/_/    \_\_____|_|    |_|    |_|  |_|______|
// https://github.com/Neargye/yacppml
//
// Licensed under the MIT License <http://opensource.org/licenses/MIT>.
// Copyright (c) 2018 Daniil Goncharov <neargye@gmail.com>.
//
// Permission is hereby  granted, free of charge, to any  person obtaining a copy
// of this software and associated  documentation files (the "Software"), to deal
// in the Software  without restriction, including without  limitation the rights
// to  use, copy,  modify, merge,  publish, distribute,  sublicense, and/or  sell
// copies  of  the Software,  and  to  permit persons  to  whom  the Software  is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE  IS PROVIDED "AS  IS", WITHOUT WARRANTY  OF ANY KIND,  EXPRESS OR
// IMPLIED,  INCLUDING BUT  NOT  LIMITED TO  THE  WARRANTIES OF  MERCHANTABILITY,
// FITNESS FOR  A PARTICULAR PURPOSE AND  NONINFRINGEMENT. IN NO EVENT  SHALL THE
// AUTHORS  OR COPYRIGHT  HOLDERS  BE  LIABLE FOR  ANY  CLAIM,  DAMAGES OR  OTHER
// LIABILITY, WHETHER IN AN ACTION OF  CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE  OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#pragma once

namespace yacppml {

namespace unused {

template <typename... T>
void Unused(T...) {}

} // namespace unused

} // namespace yacppml

#define UNUSED(...) (void)decltype(::yacppml::unused::Unused(__VA_ARGS__))()