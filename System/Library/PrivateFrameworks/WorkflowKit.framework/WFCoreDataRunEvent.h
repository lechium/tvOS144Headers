/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/WFRecordStorage.h>

@class NSString, NSDate, WFCoreDataWorkflow, WFCoreDataTrigger;

@interface WFCoreDataRunEvent : NSManagedObject <WFRecordStorage>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) int outcome; 
@property (nonatomic,copy) NSString * source; 
@property (nonatomic,retain) WFCoreDataWorkflow * shortcut; 
@property (nonatomic,retain) WFCoreDataTrigger * trigger; 
+(id)fetchRequest;
-(id)descriptor;
@end

