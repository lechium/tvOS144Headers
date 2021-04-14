/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourServices.framework/SeymourServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate;

@interface ManagedAssetRequestKeyMetadata : NSManagedObject

@property (assign,nonatomic) BOOL canFreeDeviceSlot; 
@property (copy,nonatomic) NSString * identifier; 
@property (copy,nonatomic) NSString * masterPlaylist; 
@property (copy,nonatomic) NSDate * renewDate; 
@property (copy,nonatomic) NSString * slotIdentifier; 
@property (copy,nonatomic) NSString * userIdentifier; 
@property (assign,nonatomic) int version; 
@property (copy,nonatomic) NSString * workoutIdentifier; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end
