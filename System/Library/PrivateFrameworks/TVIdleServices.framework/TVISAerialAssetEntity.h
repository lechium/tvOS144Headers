/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVIdleServices.framework/TVIdleServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NSArray, NSSet, NSDictionary, NSDate;

@interface TVISAerialAssetEntity : NSManagedObject

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * shotID; 
@property (assign,nonatomic) short playOrder; 
@property (nonatomic,copy) NSString * accessibilityLabel; 
@property (nonatomic,copy) NSArray * categories; 
@property (nonatomic,readonly) NSSet * categoryIDs; 
@property (nonatomic,retain) NSDictionary * remoteURLs; 
@property (nonatomic,retain) NSDictionary * pointsOfInterest; 
@property (nonatomic,copy) NSDate * lastDownloaded; 
+(id)fetchRequest;
+(id)entityDescriptionForContext:(id)arg1 ;
-(NSSet *)categoryIDs;
@end

