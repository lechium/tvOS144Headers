/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSDestinationProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IDSDestination : NSObject <IDSDestinationProtocol, NSCopying>

@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (getter=isGuest,nonatomic,readonly) BOOL guest; 
@property (getter=isDevice,nonatomic,readonly) BOOL device; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)destinationWithDevice:(id)arg1 ;
+(id)destinationWithRapportPublicIdentifier:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)destinationWithStrings:(id)arg1 ;
+(id)destinationWithAlias:(id)arg1 pushToken:(id)arg2 ;
+(id)destinationWithString:(id)arg1 ;
+(id)destinationWithGroup:(id)arg1 ;
+(id)defaultPairedDeviceDestination;
+(id)sentinelSelfAliasDestination;
+(id)destinationWithRapportPublicIdentifierURI:(id)arg1 ;
+(id)destinationWithDestinations:(id)arg1 ;
+(id)destinationWithURI:(id)arg1 ;
+(id)destinationWithDeviceURI:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)groupID;
-(id)destinationURIs;
-(id)normalizedURIs;
-(id)normalizedURIStrings;
-(BOOL)isEqualToDestination:(id)arg1 ;
-(BOOL)isGuest;
-(BOOL)isDevice;
@end

