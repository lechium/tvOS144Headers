/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAPNumberParser.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMDCameraRecordingH264Level : HAPNumberParser <NSSecureCoding> {

	long long _h264Level;

}

@property (nonatomic,readonly) long long h264Level;              //@synthesize h264Level=_h264Level - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)arrayWithLevels:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTLVData:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(long long)h264Level;
-(id)initWithH264Level:(long long)arg1 ;
@end

