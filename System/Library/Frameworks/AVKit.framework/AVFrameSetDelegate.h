/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVFrameSetDelegate <NSObject>
@required
-(unsigned long long)frameIndexForTime:(double)arg1;
-(void)didLoadFrameAffectingRange:(NSRange)arg1;
-(void)mediaServerResetInvalidatedFrameSet:(id)arg1;
-(double)timeForFrameIndex:(unsigned long long)arg1;

@end

