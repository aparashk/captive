/* SPDX-License-Identifier: MIT */
#pragma once

#include <devices/arm/primecell.h>

namespace captive {
	namespace devices {
		namespace arm {

			class SP805 : public Primecell {
			public:
				SP805();
				virtual ~SP805();

				bool read(uint64_t off, uint8_t len, uint64_t& data) override;
				bool write(uint64_t off, uint8_t len, uint64_t data) override;

				virtual std::string name() const
				{
					return "sp805";
				}
			};
		}
	}
}
