/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
@class UIView;

@interface TVLJSView : NSObject {

	UIView* _underlyingUIView;

}

@property (nonatomic,retain,readonly) UIView * underlyingUIView;              //@synthesize underlyingUIView=_underlyingUIView - In the implementation block
+(void)addConstructorToObject:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 ;
+(id)viewFromValue:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 exception:(const OpaqueJSValue*)arg3 ;
+(OpaqueJSValueRef)constructObjectWithClassName:(id)arg1 withATVJSViewClass:(Class)arg2 inContext:(OpaqueJSContextRef)arg3 ;
-(void)dealloc;
-(id)makeUnderlyingUIView;
-(UIView *)underlyingUIView;
@end

