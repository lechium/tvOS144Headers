/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFAction.h>

@class NSMutableArray;

@interface WFEncodeMediaAction : WFAction {

	NSMutableArray* _exportSessions;

}

@property (nonatomic,retain) NSMutableArray * exportSessions;              //@synthesize exportSessions=_exportSessions - In the implementation block
+(BOOL)outputIsExemptFromTaintTrackingInheritance;
-(void)cancel;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)finishRunningWithError:(id)arg1 ;
-(void)initializeParameters;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)nonEmptyStringValueForKey:(id)arg1 ;
-(void)getMetadataItems:(/*^block*/id)arg1 ;
-(id)metadataForAsset:(id)arg1 newMetadata:(id)arg2 ;
-(void)encodeItems:(id)arg1 metadata:(id)arg2 ;
-(void)updateSpeedVisibility;
-(NSMutableArray *)exportSessions;
-(void)setExportSessions:(NSMutableArray *)arg1 ;
@end

