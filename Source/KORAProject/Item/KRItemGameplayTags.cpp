#include "Item/KRItemGameplayTags.h"

namespace KRGameplayTags
{
	// ===== Item Types =====
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(ItemType_Equip_Sword, "ItemType.Equip.Sword", "Sword item");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(ItemType_Equip_Gun, "ItemType.Equip.Gun", "Gun item");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(ItemType_Equip_GunModule, "ItemType.Equip.GunModule", "Gun module");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(ItemType_Equip_SwordModule, "ItemType.Equip.SwordModule", "Sword module");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(ItemType_Equip_Armor, "ItemType.Equip.Armor", "Armor");

	UE_DEFINE_GAMEPLAY_TAG_COMMENT(ItemType_Consume_Potion, "ItemType.Consume.Potion", "Potion");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(ItemType_Consume_Insurance_Coin, "ItemType.Consume.Insurance.Coin", "Insurance Coin");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(ItemType_Consume_Insurance_Wallet, "ItemType.Consume.Insurance.Wallet", "Insurance Wallet");

	UE_DEFINE_GAMEPLAY_TAG_COMMENT(ItemType_Tool_Light, "ItemType.Tool.Light", "Light tool");

	UE_DEFINE_GAMEPLAY_TAG_COMMENT(ItemType_Material_Scrap, "ItemType.Material.Scrap", "Scrap");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(ItemType_Material_Tech, "ItemType.Material.Tech", "Tech");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(ItemType_Material_Doc, "ItemType.Material.Doc", "Doc");

	UE_DEFINE_GAMEPLAY_TAG_COMMENT(ItemType_Quest, "ItemType.Quest", "Quest item");

	// ===== Weapon Stats =====
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Weapon_Gun_CritMultiplier, "Weapon.Gun.CritMultiplier", "Crit multiplier (Gun)");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Weapon_Sword_CritMultiplier, "Weapon.Sword.CritMultiplier", "Crit multiplier (Sword)");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Weapon_Both_AttackSpeed, "Weapon.Both.AttackSpeed", "Attack speed");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Weapon_Gun_Accuracy, "Weapon.Gun.Accuracy", "Accuracy");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Weapon_Gun_Recoil, "Weapon.Gun.Recoil", "Recoil");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Weapon_Gun_ExtendMag, "Weapon.Gun.ExtendMag", "Extended magazine");

	// ===== Elemental =====
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Elemental_Fire, "Ability.Elemental.Fire", "Fire ability");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Elemental_Ice, "Ability.Elemental.Ice", "Ice ability");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Elemental_Electronic, "Ability.Elemental.Electronic", "Electronic ability");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Elemental_Dark, "Ability.Elemental.Dark", "Dark ability");

	// ===== ApplyCC =====
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_ApplyCC_Stun, "Ability.ApplyCC.Stun", "Stun CC");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_ApplyCC_Slow, "Ability.ApplyCC.Slow", "Slow CC");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_ApplyCC_Groggy, "Ability.ApplyCC.Groggy", "Groggy CC");

	// ===== Item =====
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Item_Stackable, "Ability.Item.Stackable", "Stackable item");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Item_Buyable, "Ability.Item.Buyable", "Buyable item");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Item_Sellable, "Ability.Item.Sellable", "Sellable item");

	// ===== Consume =====
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Consume_Heal, "Ability.Consume.Heal", "Recover HP");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Consume_Stamina, "Ability.Consume.Stamina", "Recover stamina");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Consume_CoreCharge, "Ability.Consume.CoreCharge", "Recover core");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Consume_ATKBuff, "Ability.Consume.ATKBuff", "Attack buff");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Consume_Stealth, "Ability.Consume.Stealth", "Stealth ability");

	// ===== Tool =====
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Tool_Light, "Ability.Tool.Light", "Light tool ability");

	// ===== Currency =====
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Currency_Purchase_Gearing, "Currency.Purchase.Gearing", "Gearing currency");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Currency_Skill_Corbyte, "Currency.Skill.Corbyte", "Corbyte currency");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Currency_Material, "Currency.Material", "Material currency");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Currency_Event, "Currency.Event", "Event currency");

	// ===== Vendor =====
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Shop_Vendor_Official, "Shop.Vendor.Official", "Official vendor shop");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Shop_Vendor_Black, "Shop.Vendor.Black", "Black market vendor");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Shop_Vendor_SoraBell, "Shop.Vendor.SoraBell", "SoraBell official shop");

	// ===== Stability =====
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Shop_Stability_Normal, "Shop.Stability.Normal", "Normal stock");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Shop_Stability_Caution, "Shop.Stability.Caution", "Stock caution");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Shop_Stability_Emergency, "Shop.Stability.Emergency", "Low stock emergency");

	// ===== Discount =====
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Shop_Discount, "Shop.Discount", "Shop discount");

	// ===== Service =====
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Shop_Service_Enhance, "Shop.Service.Enhance", "Enhancement service");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Shop_Service_Repair, "Shop.Service.Repair", "Repair service");

	// ===== Rarity =====
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Rarity_Common, "Rarity.Common", "Rarity Common");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Rarity_Uncommon, "Rarity.Uncommon", "Rarity Uncommon");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Rarity_Rare, "Rarity.Rare", "Rarity Rare");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Rarity_Epic, "Rarity.Epic", "Rarity Epic");
}