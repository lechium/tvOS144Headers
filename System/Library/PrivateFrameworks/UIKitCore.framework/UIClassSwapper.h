/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface UIClassSwapper : NSObject {

	NSString* className;
	id object;

}
+(id)swapperForObject:(id)arg1 withClassName:(id)arg2 ;
-(id)object;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)className;
-(id)performSelectorForObject:(id)arg1 selector:(SEL)arg2 withObject:(id)arg3 withObject:(id)arg4 withObject:(id)arg5 ;
-(id)initWithObject:(id)arg1 andClassName:(id)arg2 ;
@end

