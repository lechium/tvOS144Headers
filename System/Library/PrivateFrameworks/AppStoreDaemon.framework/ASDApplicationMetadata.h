/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface ASDApplicationMetadata : NSObject <NSCopying, NSSecureCoding> {

	BOOL _deviceBasedVPP;
	BOOL _isBeta;
	NSString* _accountName;
	NSNumber* _accountID;
	NSString* _altDSID;
	NSString* _artworkPath;
	NSString* _bundleID;
	NSString* _bundleVersion;
	NSString* _cohort;
	NSString* _deviceVendorID;
	NSNumber* _downloaderID;
	NSNumber* _externalVersionIdentifier;
	NSNumber* _familyID;
	NSNumber* _installOrder;
	NSNumber* _itemID;
	NSString* _itemName;
	NSNumber* _purchaserDSID;
	NSNumber* _storeFront;
	NSString* _vendorName;
	NSString* _shortVersion;

}

@property (nonatomic,copy) NSString * accountName;                            //@synthesize accountName=_accountName - In the implementation block
@property (nonatomic,copy) NSNumber * accountID;                              //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy) NSString * altDSID;                                //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,copy) NSString * artworkPath;                            //@synthesize artworkPath=_artworkPath - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                           //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                          //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy) NSString * cohort;                                 //@synthesize cohort=_cohort - In the implementation block
@property (nonatomic,copy) NSString * deviceVendorID;                         //@synthesize deviceVendorID=_deviceVendorID - In the implementation block
@property (assign,nonatomic) BOOL deviceBasedVPP;                             //@synthesize deviceBasedVPP=_deviceBasedVPP - In the implementation block
@property (nonatomic,copy) NSNumber * downloaderID;                           //@synthesize downloaderID=_downloaderID - In the implementation block
@property (nonatomic,copy) NSNumber * externalVersionIdentifier;              //@synthesize externalVersionIdentifier=_externalVersionIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * familyID;                               //@synthesize familyID=_familyID - In the implementation block
@property (assign,nonatomic) BOOL isBeta;                                     //@synthesize isBeta=_isBeta - In the implementation block
@property (nonatomic,copy) NSNumber * installOrder;                           //@synthesize installOrder=_installOrder - In the implementation block
@property (nonatomic,copy) NSNumber * itemID;                                 //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) NSString * itemName;                               //@synthesize itemName=_itemName - In the implementation block
@property (nonatomic,copy) NSNumber * purchaserDSID;                          //@synthesize purchaserDSID=_purchaserDSID - In the implementation block
@property (nonatomic,copy) NSNumber * storeFront;                             //@synthesize storeFront=_storeFront - In the implementation block
@property (nonatomic,copy) NSString * vendorName;                             //@synthesize vendorName=_vendorName - In the implementation block
@property (nonatomic,copy) NSString * shortVersion;                           //@synthesize shortVersion=_shortVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleID;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)vendorName;
-(NSNumber *)itemID;
-(NSNumber *)purchaserDSID;
-(BOOL)isBeta;
-(NSString *)bundleVersion;
-(NSNumber *)accountID;
-(NSString *)accountName;
-(void)setAccountID:(NSNumber *)arg1 ;
-(void)setBundleVersion:(NSString *)arg1 ;
-(void)setVendorName:(NSString *)arg1 ;
-(void)setAccountName:(NSString *)arg1 ;
-(void)setItemID:(NSNumber *)arg1 ;
-(NSString *)itemName;
-(void)setItemName:(NSString *)arg1 ;
-(void)setDeviceBasedVPP:(BOOL)arg1 ;
-(NSNumber *)externalVersionIdentifier;
-(void)setExternalVersionIdentifier:(NSNumber *)arg1 ;
-(void)setDownloaderID:(NSNumber *)arg1 ;
-(void)setFamilyID:(NSNumber *)arg1 ;
-(NSNumber *)downloaderID;
-(NSNumber *)familyID;
-(BOOL)deviceBasedVPP;
-(void)setStoreFront:(NSNumber *)arg1 ;
-(NSNumber *)storeFront;
-(id)initWithBundleID:(id)arg1 ;
-(void)setPurchaserDSID:(NSNumber *)arg1 ;
-(void)setCohort:(NSString *)arg1 ;
-(void)setDeviceVendorID:(NSString *)arg1 ;
-(void)setIsBeta:(BOOL)arg1 ;
-(void)setShortVersion:(NSString *)arg1 ;
-(NSString *)cohort;
-(NSString *)deviceVendorID;
-(NSString *)shortVersion;
-(NSString *)artworkPath;
-(void)setArtworkPath:(NSString *)arg1 ;
-(NSNumber *)installOrder;
-(void)setInstallOrder:(NSNumber *)arg1 ;
@end

