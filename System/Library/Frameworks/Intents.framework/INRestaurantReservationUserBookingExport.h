/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INRestaurantGuest, NSString, INRestaurantOffer, NSDate;


@protocol INRestaurantReservationUserBookingExport <NSObject,JSExport>
@property (nonatomic,copy) INRestaurantGuest * guest; 
@property (nonatomic,copy) NSString * advisementText; 
@property (nonatomic,copy) INRestaurantOffer * selectedOffer; 
@property (nonatomic,copy) NSString * guestProvidedSpecialRequestText; 
@property (assign,nonatomic) unsigned long long status; 
@property (nonatomic,copy) NSDate * dateStatusModified; 
@required
-(id)init;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1;
-(INRestaurantGuest *)guest;
-(void)setGuest:(id)arg1;
-(NSString *)advisementText;
-(void)setAdvisementText:(id)arg1;
-(INRestaurantOffer *)selectedOffer;
-(void)setSelectedOffer:(id)arg1;
-(NSString *)guestProvidedSpecialRequestText;
-(void)setGuestProvidedSpecialRequestText:(id)arg1;
-(NSDate *)dateStatusModified;
-(void)setDateStatusModified:(id)arg1;

@end

