/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SampleAnalysis/SACallTreeNode.h>
#import <libobjc.A.dylib/SAJSONSerialization.h>

@class SAFrame, NSMutableArray, NSArray, NSString;

@interface SACallTreeFrame : SACallTreeNode <SAJSONSerialization> {

	BOOL _isLeafFrame;
	SAFrame* _frame;
	NSMutableArray* _children;

}

@property (readonly) SAFrame * frame;                               //@synthesize frame=_frame - In the implementation block
@property (readonly) NSArray * childFrames; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SAFrame *)frame;
-(NSArray *)childFrames;
-(void)writeJSONDictionaryEntriesToStream:(id)arg1 ;
-(id)initWithFrame:(id)arg1 startSampleIndex:(unsigned long long)arg2 sampleCount:(unsigned long long)arg3 isLeafFrame:(BOOL)arg4 ;
@end

