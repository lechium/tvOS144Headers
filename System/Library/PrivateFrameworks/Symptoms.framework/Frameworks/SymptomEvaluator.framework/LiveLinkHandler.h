/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>
#import <SymptomEvaluator/SymptomAdditionalProtocol.h>

@class NSString;

@interface LiveLinkHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)configureClass:(id)arg1 ;
-(int)configureInstance:(id)arg1 ;
-(BOOL)noteSymptom:(id)arg1 ;
-(BOOL)startTrackingLiveLinkOnInterface:(id)arg1 ;
-(BOOL)stopTrackingLiveLinkOnInterface:(id)arg1 ;
-(BOOL)includeLocalFlowsTrackingOnInterface:(id)arg1 ;
-(BOOL)excludeLocalFlowsTrackingOnInterface:(id)arg1 ;
@end

