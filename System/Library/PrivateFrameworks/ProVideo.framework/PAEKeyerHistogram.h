/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface PAEKeyerHistogram : NSObject <NSCoding> {

	ColorHisto* _histogram;

}
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setHistogram:(ColorHisto*)arg1 ;
-(ColorHisto*)getHistogram;
-(void)setHistogramArray:(id)arg1 ;
@end

