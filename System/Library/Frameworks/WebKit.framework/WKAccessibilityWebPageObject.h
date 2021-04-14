/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKAccessibilityWebPageObjectBase.h>

@class NSData;

@interface WKAccessibilityWebPageObject : WKAccessibilityWebPageObjectBase {

	NSData* _remoteTokenData;

}

@property (nonatomic,retain) NSData * remoteTokenData;              //@synthesize remoteTokenData=_remoteTokenData - In the implementation block
-(id)init;
-(void)dealloc;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(void)_accessibilityCategoryInstalled:(id)arg1 ;
-(double)pageScale;
-(NSData *)remoteTokenData;
-(void)setRemoteTokenData:(NSData *)arg1 ;
@end

