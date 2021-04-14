/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/TBNetwork.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSSet, NSArray, NSDate, TBTileMO;

@interface TBNetworkMO : NSManagedObject <TBNetwork, NSSecureCoding, NSCoding>

@property (nonatomic,readonly) NSString * remoteIdentifier; 
@property (nonatomic,readonly) NSString * SSID; 
@property (nonatomic,readonly) unsigned long long authMask; 
@property (nonatomic,readonly) NSString * authDescription; 
@property (nonatomic,readonly) NSString * attributesDescription; 
@property (nonatomic,readonly) NSSet * accessPoints; 
@property (nonatomic,readonly) NSArray * ownerIdentifiers; 
@property (getter=isCaptive,nonatomic,readonly) BOOL captive; 
@property (getter=isMoving,nonatomic,readonly) BOOL moving; 
@property (getter=isSuspicious,nonatomic,readonly) BOOL suspicious; 
@property (getter=isPublic,nonatomic,readonly) BOOL public; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long venueGroup; 
@property (nonatomic,readonly) unsigned venueType; 
@property (nonatomic,readonly) unsigned long long tileKey; 
@property (nonatomic,readonly) unsigned long long accessPointCount; 
@property (nonatomic,readonly) double centroidLat; 
@property (nonatomic,readonly) double centroidLng; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<TBScore> popularityScore; 
@property (nonatomic,readonly) id<TBScore> qualityScore; 
@property (nonatomic,readonly) long long accessPointCount; 
@property (assign,nonatomic) long long authMask; 
@property (assign,nonatomic) BOOL captive; 
@property (assign,nonatomic) double centroidLat; 
@property (assign,nonatomic) double centroidLng; 
@property (nonatomic,copy) NSDate * created; 
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) BOOL moving; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) NSArray * ownerIdentifiers; 
@property (assign,nonatomic) int popularityScoreValue; 
@property (assign,nonatomic) BOOL public; 
@property (assign,nonatomic) int qualityScoreValue; 
@property (assign,nonatomic) BOOL suspicious; 
@property (nonatomic,readonly) long long tileKey; 
@property (assign,nonatomic) long long timestamp; 
@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) long long venueGroup; 
@property (assign,nonatomic) int venueType; 
@property (nonatomic,retain) NSSet * accessPoints; 
@property (nonatomic,retain) TBTileMO * tile; 
+(BOOL)supportsSecureCoding;
+(id)entityName;
+(id)fetchRequest;
+(void)removeAllNetworksInMOC:(id)arg1 ;
+(id)generateNewNetworkObjectFromMOC:(id)arg1 ;
+(void)removeNetworksUsingPredicate:(id)arg1 moc:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)isMoving;
-(NSString *)SSID;
-(NSString *)remoteIdentifier;
-(id<TBScore>)qualityScore;
-(BOOL)isCaptive;
-(BOOL)isPublic;
-(id<TBScore>)popularityScore;
-(BOOL)isSuspicious;
-(NSString *)authDescription;
-(NSString *)attributesDescription;
@end

