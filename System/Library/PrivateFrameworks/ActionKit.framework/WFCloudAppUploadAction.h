/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFAction.h>
#import <libobjc.A.dylib/CLAPIEngineDelegate.h>

@class CLAPIEngine, NSString;

@interface WFCloudAppUploadAction : WFAction <CLAPIEngineDelegate> {

	CLAPIEngine* _engine;

}

@property (nonatomic,retain) CLAPIEngine * engine;                  //@synthesize engine=_engine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)outputIsExemptFromTaintTrackingInheritance;
-(void)cancel;
-(CLAPIEngine *)engine;
-(void)setEngine:(CLAPIEngine *)arg1 ;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)shouldBeSuggestedAfterAction:(id)arg1 inWorkflow:(id)arg2 ;
-(void)finishRunningWithError:(id)arg1 ;
-(void)requestDidFailWithError:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(void)fileUploadDidProgress:(double)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(void)fileUploadDidSucceedWithResultingItem:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(void)linkBookmarkDidSucceedWithResultingItem:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3 ;
@end

