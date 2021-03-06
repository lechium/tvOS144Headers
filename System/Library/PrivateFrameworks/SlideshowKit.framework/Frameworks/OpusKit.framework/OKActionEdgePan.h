/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKActionPan.h>
#import <libobjc.A.dylib/OKActionEdgePanExports.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface OKActionEdgePan : OKActionPan <OKActionEdgePanExports, NSSecureCoding>
+(BOOL)supportsSecureCoding;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)edgePanActionWithState:(unsigned long long)arg1 location:(CGPoint)arg2 touchCount:(unsigned long long)arg3 translation:(CGPoint)arg4 previousTranslation:(CGPoint)arg5 velocity:(CGPoint)arg6 previousVelocity:(CGPoint)arg7 direction:(unsigned long long)arg8 context:(id)arg9 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

