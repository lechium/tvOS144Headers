/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WebCoreFrameScrollView
@required
-(void)setScrollingModes:(unsigned char)arg1 vertical:(unsigned char)arg2 andLock:(BOOL)arg3;
-(void)scrollingModes:(unsigned char*)arg1 vertical:(unsigned char*)arg2;
-(void)setScrollBarsSuppressed:(BOOL)arg1 repaintOnUnsuppress:(BOOL)arg2;
-(CGPoint*)scrollOrigin;
-(void)setScrollOrigin:(CGPoint)arg1 updatePositionAtAll:(BOOL)arg2 immediately:(BOOL)arg3;

@end

