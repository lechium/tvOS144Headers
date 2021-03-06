/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/WFSerializableContent.h>

@class LSApplicationProxy, NSString;

@interface WFContentAttribution : NSObject <NSSecureCoding, WFSerializableContent> {

	unsigned long long _disclosureLevel;
	unsigned long long _managedLevel;

}

@property (nonatomic,readonly) LSApplicationProxy * app; 
@property (nonatomic,readonly) unsigned long long disclosureLevel;              //@synthesize disclosureLevel=_disclosureLevel - In the implementation block
@property (nonatomic,readonly) unsigned long long managedLevel;                 //@synthesize managedLevel=_managedLevel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
+(id)attributionWithAccountBasedBundleIdentifier:(id)arg1 accountIdentifier:(id)arg2 disclosureLevel:(unsigned long long)arg3 ;
+(id)attributionWithDisclosureLevel:(unsigned long long)arg1 managedLevel:(unsigned long long)arg2 ;
+(id)attributionWithBundleIdentifier:(id)arg1 disclosureLevel:(unsigned long long)arg2 ;
+(id)attributionWithBundleIdentifier:(id)arg1 accountIdentifier:(id)arg2 disclosureLevel:(unsigned long long)arg3 managedLevel:(unsigned long long)arg4 ;
+(id)shortcutsAppAttribution;
+(id)shortcutsAppAttributionWithDisclosureLevel:(unsigned long long)arg1 ;
-(LSApplicationProxy *)app;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)wfSerializedRepresentation;
-(unsigned long long)managedLevel;
-(id)attributionIdentifier;
-(id)initWithDisclosureLevel:(unsigned long long)arg1 managedLevel:(unsigned long long)arg2 ;
-(unsigned long long)disclosureLevel;
@end

