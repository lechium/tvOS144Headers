/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIWebSelectedItemPrivate;
@class NSArray;

@interface UIWebOptGroup : NSObject {

	id<UIWebSelectedItemPrivate> _group;
	NSArray* _options;
	long long _offset;

}

@property (nonatomic,readonly) long long offset;                              //@synthesize offset=_offset - In the implementation block
@property (nonatomic,retain) id<UIWebSelectedItemPrivate> group;              //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) NSArray * options;                               //@synthesize options=_options - In the implementation block
-(void)dealloc;
-(void)setGroup:(id<UIWebSelectedItemPrivate>)arg1 ;
-(NSArray *)options;
-(void)setOptions:(NSArray *)arg1 ;
-(id<UIWebSelectedItemPrivate>)group;
-(long long)offset;
-(id)initWithGroup:(id)arg1 itemOffset:(long long)arg2 ;
@end

