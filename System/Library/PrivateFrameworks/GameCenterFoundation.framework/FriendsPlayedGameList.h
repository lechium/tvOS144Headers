/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSDate, NSSet, GKGameCacheObject;

@interface FriendsPlayedGameList : NSManagedObject

@property (nonatomic,copy) NSDate * expirationDate; 
@property (nonatomic,retain) NSSet * entries; 
@property (nonatomic,retain) GKGameCacheObject * game; 
+(id)fetchRequest;
@end

