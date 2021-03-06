/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RBSInvalidatable;
@class NSString;

@interface RBStateCaptureItem : NSObject {

	id<RBSInvalidatable> _invalidatable;
	/*^block*/id _block;
	NSString* _title;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) id block;                           //@synthesize block=_block - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)dealloc;
-(NSString *)identifier;
-(id)block;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 identifier:(id)arg2 block:(/*^block*/id)arg3 ;
@end

