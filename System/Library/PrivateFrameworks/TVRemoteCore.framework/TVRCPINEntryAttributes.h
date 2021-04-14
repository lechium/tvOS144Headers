/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface TVRCPINEntryAttributes : NSObject <NSSecureCoding> {

	NSArray* _groupLengths;

}

@property (nonatomic,readonly) unsigned long long totalDigitCount; 
@property (nonatomic,readonly) unsigned long long numberOfDigitGroups; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithGroupLengths:(id)arg1 ;
-(id)initWithDigitCount:(unsigned long long)arg1 ;
-(unsigned long long)totalDigitCount;
-(unsigned long long)numberOfDigitGroups;
-(unsigned long long)numberOfDigitsInGroup:(unsigned long long)arg1 ;
@end

