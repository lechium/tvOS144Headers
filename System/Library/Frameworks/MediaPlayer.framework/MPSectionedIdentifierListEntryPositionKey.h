/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MPSectionedIdentifierListEntryPositionKey : NSObject <NSSecureCoding> {

	NSString* _deviceIdentifier;
	NSString* _generation;

}

@property (nonatomic,copy) NSString * deviceIdentifier;              //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * generation;                    //@synthesize generation=_generation - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)positionKeyWithDeviceIdentifier:(id)arg1 generation:(id)arg2 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)generation;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(void)setGeneration:(NSString *)arg1 ;
@end

