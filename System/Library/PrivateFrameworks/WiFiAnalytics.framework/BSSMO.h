/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSUUID, NSString, NSDate, NSObject, BlacklistMO, NSSet, NetworkMO;

@interface BSSMO : NSManagedObject

@property (nonatomic,copy) NSUUID * apid; 
@property (assign,nonatomic) short autoLeaveRssi; 
@property (assign,nonatomic) BOOL beaconMetricSubmitted; 
@property (nonatomic,copy) NSString * bssid; 
@property (assign,nonatomic) short channel; 
@property (assign,nonatomic) short disBcnLossCount; 
@property (assign,nonatomic) short disTrgDisCount; 
@property (assign,nonatomic) short disUsrForcedInWeakRssiCount; 
@property (nonatomic,copy) NSUUID * idUsedInMetric; 
@property (assign,nonatomic) BOOL isEdgeForJoin; 
@property (assign,nonatomic) BOOL isEdgeForLeave; 
@property (assign,nonatomic) BOOL isTCPGood; 
@property (nonatomic,copy) NSDate * lastSeen; 
@property (assign,nonatomic) BOOL manualJoinAfterAutoLeave; 
@property (nonatomic,retain) NSObject * neighborBSSIDs; 
@property (nonatomic,retain) NSObject * neighborChannels; 
@property (nonatomic,retain) NSObject * parsedBeacon; 
@property (assign,nonatomic) int phyMode; 
@property (assign,nonatomic) short roamTriggerRssi; 
@property (nonatomic,retain) NSObject * unparsedBeacon; 
@property (nonatomic,retain) BlacklistMO * blacklist; 
@property (nonatomic,retain) NSSet * geoTag; 
@property (nonatomic,retain) NSSet * joins; 
@property (nonatomic,retain) NSSet * leaves; 
@property (nonatomic,retain) NetworkMO * network; 
@property (nonatomic,retain) NSSet * roamsFrom; 
@property (nonatomic,retain) NSSet * roamsTo; 
+(id)entityName;
+(id)fetchRequest;
@end

