/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CalGrantedDelegate : NSObject <NSSecureCoding> {

	NSString* _uri;
	NSString* _displayName;
	NSString* _preferredUserAddress;
	long long _permission;

}

@property (nonatomic,copy) NSString * uri;                               //@synthesize uri=_uri - In the implementation block
@property (nonatomic,copy) NSString * displayName;                       //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * preferredUserAddress;              //@synthesize preferredUserAddress=_preferredUserAddress - In the implementation block
@property (assign,nonatomic) long long permission;                       //@synthesize permission=_permission - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)uri;
-(long long)permission;
-(void)setUri:(NSString *)arg1 ;
-(NSString *)preferredUserAddress;
-(void)setPreferredUserAddress:(NSString *)arg1 ;
-(void)setPermission:(long long)arg1 ;
@end

