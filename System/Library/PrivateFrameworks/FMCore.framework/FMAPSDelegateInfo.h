/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FMAPSDelegate;
@class NSString;

@interface FMAPSDelegateInfo : NSObject {

	NSString* _topic;
	id<FMAPSDelegate> _delegate;

}

@property (nonatomic,retain) NSString * topic;                               //@synthesize topic=_topic - In the implementation block
@property (assign,nonatomic,__weak) id<FMAPSDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<FMAPSDelegate>)delegate;
-(void)setDelegate:(id<FMAPSDelegate>)arg1 ;
-(void)setTopic:(NSString *)arg1 ;
-(NSString *)topic;
@end

