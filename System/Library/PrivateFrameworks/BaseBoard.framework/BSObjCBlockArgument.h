/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BSObjCArgument.h>

@class NSArray, BSObjCArgument;

@interface BSObjCBlockArgument : BSObjCArgument {

	NSArray* _arguments;
	BSObjCArgument* _returnValue;

}

@property (nonatomic,retain,readonly) BSObjCArgument * returnValue;              //@synthesize returnValue=_returnValue - In the implementation block
@property (nonatomic,copy,readonly) NSArray * arguments;                         //@synthesize arguments=_arguments - In the implementation block
-(NSArray *)arguments;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_prettyTypeString;
-(BOOL)isBlock;
-(BSObjCArgument *)returnValue;
@end

