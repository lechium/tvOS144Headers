/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GCControllerHIDInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObjectNSCopyingNSSecureCoding;
@class NSNumber, NSString;

@interface GCHIDInformation : NSObject <GCControllerHIDInfo, NSSecureCoding> {

	id<NSObject><NSCopying><NSSecureCoding> _identifier;
	NSNumber* _registryID;

}

@property (nonatomic,copy) NSNumber * registryID;                                     //@synthesize registryID=_registryID - In the implementation block
@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(NSNumber *)registryID;
-(void)setController:(id)arg1 ;
-(void)setRegistryID:(NSNumber *)arg1 ;
@end

