
/*
 * Copyright 2021 ElectroOptical Innovations, LLC
 * HoldingRegisterMappedDataStore.h
 * Autogenerated file: 2021-01-05T13:59:22.547527
 */

#pragma once

#include <ArrayView/ArrayView.h>
#include <DataStores/DataStores.h>
#include <Utilities/TypeConversion.h>

#include <algorithm>
#include <array>
#include <cstdint>

struct HoldingRegisters {
  uint32_t analog_output0{};
  uint32_t analog_output1{};
  uint32_t isp_mode{};
  uint32_t slave_address_unlock{};
  uint16_t slave_address{};
  uint32_t clear_faults{};
  uint32_t start_data_read{};
};

enum class HoldingRegistersEntryIdentifier {
  analog_output0,
  analog_output1,
  isp_mode,
  slave_address_unlock,
  slave_address,
  clear_faults,
  start_data_read,
  unknown
};

class HoldingRegistersWrapper {
 public:
  static const constexpr std::size_t entries_ = 7;
  static const constexpr std::array<
      DataStores::StructEntry<HoldingRegistersEntryIdentifier>, entries_>
      entry_positions_{
          DataStores::StructEntry<HoldingRegistersEntryIdentifier>{
              HoldingRegistersEntryIdentifier::analog_output0,
              offsetof(HoldingRegisters, analog_output0),
              sizeof(HoldingRegisters::analog_output0)},
          DataStores::StructEntry<HoldingRegistersEntryIdentifier>{
              HoldingRegistersEntryIdentifier::analog_output1,
              offsetof(HoldingRegisters, analog_output1),
              sizeof(HoldingRegisters::analog_output1)},
          DataStores::StructEntry<HoldingRegistersEntryIdentifier>{
              HoldingRegistersEntryIdentifier::isp_mode,
              offsetof(HoldingRegisters, isp_mode),
              sizeof(HoldingRegisters::isp_mode)},
          DataStores::StructEntry<HoldingRegistersEntryIdentifier>{
              HoldingRegistersEntryIdentifier::slave_address_unlock,
              offsetof(HoldingRegisters, slave_address_unlock),
              sizeof(HoldingRegisters::slave_address_unlock)},
          DataStores::StructEntry<HoldingRegistersEntryIdentifier>{
              HoldingRegistersEntryIdentifier::slave_address,
              offsetof(HoldingRegisters, slave_address),
              sizeof(HoldingRegisters::slave_address)},
          DataStores::StructEntry<HoldingRegistersEntryIdentifier>{
              HoldingRegistersEntryIdentifier::clear_faults,
              offsetof(HoldingRegisters, clear_faults),
              sizeof(HoldingRegisters::clear_faults)},
          DataStores::StructEntry<HoldingRegistersEntryIdentifier>{
              HoldingRegistersEntryIdentifier::start_data_read,
              offsetof(HoldingRegisters, start_data_read),
              sizeof(HoldingRegisters::start_data_read)},
      };

 private:
  HoldingRegisters* data_bank_{};

 public:
  explicit HoldingRegistersWrapper(HoldingRegisters* data_bank)
      : data_bank_{data_bank} {}
  static const constexpr std::size_t size() { return sizeof(HoldingRegisters); }

  void SetField(const std::size_t index, const uint8_t* data,
                const std::size_t size) {
    const HoldingRegistersEntryIdentifier identifier =
        static_cast<HoldingRegistersEntryIdentifier>(index);
    switch (identifier) {
      case (HoldingRegistersEntryIdentifier::unknown): {
        // Ignore this case, should be scrubed
        break;
      }
      case (HoldingRegistersEntryIdentifier::analog_output0): {
        const auto value =
            Utilities::Make_MSB_IntegerTypeFromArray<uint32_t, uint8_t>(data,
                                                                        size);
        data_bank_->analog_output0 = value;

        break;
      }
      case (HoldingRegistersEntryIdentifier::analog_output1): {
        const auto value =
            Utilities::Make_MSB_IntegerTypeFromArray<uint32_t, uint8_t>(data,
                                                                        size);
        data_bank_->analog_output1 = value;

        break;
      }
      case (HoldingRegistersEntryIdentifier::isp_mode): {
        const auto value =
            Utilities::Make_MSB_IntegerTypeFromArray<uint32_t, uint8_t>(data,
                                                                        size);
        data_bank_->isp_mode = value;

        break;
      }
      case (HoldingRegistersEntryIdentifier::slave_address_unlock): {
        const auto value =
            Utilities::Make_MSB_IntegerTypeFromArray<uint32_t, uint8_t>(data,
                                                                        size);
        data_bank_->slave_address_unlock = value;

        break;
      }
      case (HoldingRegistersEntryIdentifier::slave_address): {
        const auto value =
            Utilities::Make_MSB_IntegerTypeFromArray<uint16_t, uint8_t>(data,
                                                                        size);
        data_bank_->slave_address = value;

        break;
      }
      case (HoldingRegistersEntryIdentifier::clear_faults): {
        const auto value =
            Utilities::Make_MSB_IntegerTypeFromArray<uint32_t, uint8_t>(data,
                                                                        size);
        data_bank_->clear_faults = value;

        break;
      }
      case (HoldingRegistersEntryIdentifier::start_data_read): {
        const auto value =
            Utilities::Make_MSB_IntegerTypeFromArray<uint32_t, uint8_t>(data,
                                                                        size);
        data_bank_->start_data_read = value;

        break;
      }
      default:
        break;
    }
  }

  void GetField(const std::size_t index, uint8_t* data,
                const std::size_t size) const {
    const HoldingRegistersEntryIdentifier identifier =
        static_cast<HoldingRegistersEntryIdentifier>(index);
    switch (identifier) {
      case (HoldingRegistersEntryIdentifier::unknown): {
        // Ignore this case, should be scrubed
        break;
      }
      case (HoldingRegistersEntryIdentifier::analog_output0): {
        const auto value = data_bank_->analog_output0;
        const auto array = Utilities::MakeMSBU8Array<uint32_t>(value);
        for (std::size_t i = 0; i < std::min(array.size(), size); i++) {
          data[i] = array.at(i);
        }

        break;
      }
      case (HoldingRegistersEntryIdentifier::analog_output1): {
        const auto value = data_bank_->analog_output1;
        const auto array = Utilities::MakeMSBU8Array<uint32_t>(value);
        for (std::size_t i = 0; i < std::min(array.size(), size); i++) {
          data[i] = array.at(i);
        }

        break;
      }
      case (HoldingRegistersEntryIdentifier::isp_mode): {
        const auto value = data_bank_->isp_mode;
        const auto array = Utilities::MakeMSBU8Array<uint32_t>(value);
        for (std::size_t i = 0; i < std::min(array.size(), size); i++) {
          data[i] = array.at(i);
        }

        break;
      }
      case (HoldingRegistersEntryIdentifier::slave_address_unlock): {
        const auto value = data_bank_->slave_address_unlock;
        const auto array = Utilities::MakeMSBU8Array<uint32_t>(value);
        for (std::size_t i = 0; i < std::min(array.size(), size); i++) {
          data[i] = array.at(i);
        }

        break;
      }
      case (HoldingRegistersEntryIdentifier::slave_address): {
        const auto value = data_bank_->slave_address;
        const auto array = Utilities::MakeMSBU8Array<uint16_t>(value);
        for (std::size_t i = 0; i < std::min(array.size(), size); i++) {
          data[i] = array.at(i);
        }

        break;
      }
      case (HoldingRegistersEntryIdentifier::clear_faults): {
        const auto value = data_bank_->clear_faults;
        const auto array = Utilities::MakeMSBU8Array<uint32_t>(value);
        for (std::size_t i = 0; i < std::min(array.size(), size); i++) {
          data[i] = array.at(i);
        }

        break;
      }
      case (HoldingRegistersEntryIdentifier::start_data_read): {
        const auto value = data_bank_->start_data_read;
        const auto array = Utilities::MakeMSBU8Array<uint32_t>(value);
        for (std::size_t i = 0; i < std::min(array.size(), size); i++) {
          data[i] = array.at(i);
        }

        break;
      }
      default:
        break;
    }
  }
  uint32_t get_analog_output0(void) const { return data_bank_->analog_output0; }
  void set_analog_output0(uint32_t value) {
    data_bank_->analog_output0 = value;
  }
  uint32_t get_analog_output1(void) const { return data_bank_->analog_output1; }
  void set_analog_output1(uint32_t value) {
    data_bank_->analog_output1 = value;
  }
  uint32_t get_isp_mode(void) const { return data_bank_->isp_mode; }
  void set_isp_mode(uint32_t value) { data_bank_->isp_mode = value; }
  uint32_t get_slave_address_unlock(void) const {
    return data_bank_->slave_address_unlock;
  }
  void set_slave_address_unlock(uint32_t value) {
    data_bank_->slave_address_unlock = value;
  }
  uint16_t get_slave_address(void) const { return data_bank_->slave_address; }
  void set_slave_address(uint16_t value) { data_bank_->slave_address = value; }
  uint32_t get_clear_faults(void) const { return data_bank_->clear_faults; }
  void set_clear_faults(uint32_t value) { data_bank_->clear_faults = value; }
  uint32_t get_start_data_read(void) const {
    return data_bank_->start_data_read;
  }
  void set_start_data_read(uint32_t value) {
    data_bank_->start_data_read = value;
  }
};  // class HoldingRegistersWrapper