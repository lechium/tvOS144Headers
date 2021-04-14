/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Rapport/RPEndpoint.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface RPRemoteDisplayDevice : RPEndpoint <NSSecureCoding> {

	unsigned _flags;
	NSString* _persistentIdentifier;

}

@property (nonatomic,copy) NSString * persistentIdentifier;              //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned flags;                           //@synthesize flags=_flags - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(unsigned)flags;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)persistentIdentifier;
-(id)descriptionWithLevel:(int)arg1 ;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(unsigned)updateWithEndpoint:(id)arg1 ;
@end

