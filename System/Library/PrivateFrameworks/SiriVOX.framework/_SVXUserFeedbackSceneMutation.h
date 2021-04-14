/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/SVXUserFeedbackSceneMutating.h>

@class SVXUserFeedbackScene, NSString, NSSet;

@interface _SVXUserFeedbackSceneMutation : NSObject <SVXUserFeedbackSceneMutating> {

	SVXUserFeedbackScene* _baseModel;
	NSString* _identifier;
	double _duration;
	NSSet* _nodes;
	struct {
		unsigned isDirty : 1;
		unsigned hasIdentifier : 1;
		unsigned hasDuration : 1;
		unsigned hasNodes : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setIdentifier:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setNodes:(id)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
@end

