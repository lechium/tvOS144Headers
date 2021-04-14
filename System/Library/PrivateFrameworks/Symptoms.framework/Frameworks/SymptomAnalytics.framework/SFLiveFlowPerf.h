/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, NSDate, SFFlow;

@interface SFLiveFlowPerf : NSManagedObject

@property (nonatomic,copy) NSNumber * connAttempts; 
@property (nonatomic,copy) NSNumber * connSuccesses; 
@property (nonatomic,copy) NSNumber * kind; 
@property (nonatomic,copy) NSNumber * overallTime; 
@property (nonatomic,copy) NSString * tag; 
@property (nonatomic,copy) NSDate * timeStamp; 
@property (nonatomic,copy) NSNumber * timesThresholded; 
@property (nonatomic,copy) NSString * tmpID; 
@property (nonatomic,copy) NSNumber * txFailPackets; 
@property (nonatomic,copy) NSNumber * txPackets; 
@property (nonatomic,copy) NSNumber * txReTxInterval; 
@property (nonatomic,copy) NSNumber * txReTxPackets; 
@property (nonatomic,copy) NSNumber * usecsEstabTime; 
@property (nonatomic,retain) SFFlow * hasFlow; 
+(id)entityName;
+(id)fetchRequest;
@end

