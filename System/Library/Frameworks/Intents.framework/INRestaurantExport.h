/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class CLLocation, NSString;


@protocol INRestaurantExport <NSObject,JSExport>
@property (nonatomic,copy) CLLocation * location; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * vendorIdentifier; 
@property (nonatomic,copy) NSString * restaurantIdentifier; 
@required
-(NSString *)name;
-(id)init;
-(void)setName:(id)arg1;
-(CLLocation *)location;
-(void)setLocation:(id)arg1;
-(NSString *)vendorIdentifier;
-(void)setVendorIdentifier:(id)arg1;
-(NSString *)restaurantIdentifier;
-(void)setRestaurantIdentifier:(id)arg1;

@end

