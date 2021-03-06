/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface PAEKeyerOMVertex : NSObject <NSSecureCoding> {

	NSNumber* _lx;
	NSNumber* _mx;
	NSNumber* _rx;
	NSNumber* _bx;
	NSNumber* _ly;
	NSNumber* _my;
	NSNumber* _ry;
	NSNumber* _by;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLx:(id)arg1 ;
-(void)setLy:(id)arg1 ;
-(float)lx;
-(float)ly;
-(void)setMx:(id)arg1 ;
-(void)setRx:(id)arg1 ;
-(void)setBx:(id)arg1 ;
-(void)setMy:(id)arg1 ;
-(void)setRy:(id)arg1 ;
-(void)setBy:(id)arg1 ;
-(float)mx;
-(float)rx;
-(float)bx;
-(float)my;
-(float)ry;
-(float)by;
@end

