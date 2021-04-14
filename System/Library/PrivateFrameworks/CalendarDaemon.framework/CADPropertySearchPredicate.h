/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/CADPredicate.h>
#import <libobjc.A.dylib/EKCustomPropertiesLoading.h>

@class NSArray, CADObjectID, NSString;

@interface CADPropertySearchPredicate : CADPredicate <EKCustomPropertiesLoading> {

	NSArray* _propertiesToLoad;
	int _entityType;
	NSArray* _filters;
	NSArray* _calendarRowIDs;
	CADObjectID* _sourceID;

}

@property (nonatomic,readonly) int entityType;                               //@synthesize entityType=_entityType - In the implementation block
@property (nonatomic,readonly) NSArray * filters;                            //@synthesize filters=_filters - In the implementation block
@property (nonatomic,readonly) NSArray * calendarRowIDs;                     //@synthesize calendarRowIDs=_calendarRowIDs - In the implementation block
@property (nonatomic,readonly) CADObjectID * sourceID;                       //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,retain) NSArray * defaultPropertiesToLoad; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)predicateFormat;
-(BOOL)validate;
-(NSArray *)filters;
-(CADObjectID *)sourceID;
-(int)entityType;
-(BOOL)shouldLoadDefaultProperties;
-(NSArray *)defaultPropertiesToLoad;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
-(void)setDefaultPropertiesToLoad:(NSArray *)arg1 ;
-(id)initWithEntityType:(int)arg1 filters:(id)arg2 calendars:(id)arg3 source:(id)arg4 ;
-(id)initWithEntityType:(int)arg1 filters:(id)arg2 calendar:(id)arg3 ;
-(id)initWithEntityType:(int)arg1 filters:(id)arg2 source:(id)arg3 ;
-(id)initWithEntityType:(int)arg1 filters:(id)arg2 calendars:(id)arg3 ;
-(NSArray *)calendarRowIDs;
-(id)extendWhereClauseWithEntityTypeLimitation:(id)arg1 withValues:(id)arg2 andTypes:(id)arg3 ;
-(id)extendWhereClauseWithCalendarOrSourceLimitation:(id)arg1 withValues:(id)arg2 andTypes:(id)arg3 ;
-(id)buildWhereClauseWithValues:(id)arg1 andTypes:(id)arg2 ;
@end

