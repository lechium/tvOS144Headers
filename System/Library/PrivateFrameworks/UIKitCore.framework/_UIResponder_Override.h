/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIResponder;

@interface _UIResponder_Override : NSObject {

	UIResponder* _owner;
	UIResponder* _target;
	long long _types;

}

@property (nonatomic,__weak,readonly) UIResponder * owner;               //@synthesize owner=_owner - In the implementation block
@property (nonatomic,__weak,readonly) UIResponder * target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) long long types;                          //@synthesize types=_types - In the implementation block
+(id)overrideForResponder:(id)arg1 withTarget:(id)arg2 forType:(long long)arg3 ;
-(id)description;
-(void)dealloc;
-(UIResponder *)target;
-(long long)types;
-(UIResponder *)owner;
@end

