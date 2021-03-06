/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MobileStorage.framework/MobileStorage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class OS_remote_device, NSURL, NSDictionary, NSString, NSNumber, NSData;

@interface PersonalizedImage : NSObject {

	BOOL _useCredentials;
	BOOL _skipLoadingLaunchDaemons;
	unsigned _digestLength;
	OS_remote_device* _remoteDevice;
	NSURL* _bundlePathURL;
	NSDictionary* _mountedVolumeEntry;
	NSURL* _imagePathURL;
	NSString* _imageVariant;
	NSURL* _trustCacheURL;
	NSNumber* _ecid;
	NSNumber* _chipID;
	NSNumber* _boardID;
	NSNumber* _securityDomain;
	NSNumber* _certificateSecurityMode;
	NSNumber* _certificateProductionStatus;
	NSNumber* _effectiveSecurityMode;
	NSNumber* _effectiveProductionStatus;
	NSNumber* _image4Supported;
	NSData* _apNonce;
	NSData* _sepNonce;
	NSString* _hardwareModel;
	NSString* _deviceClass;
	NSURL* _signingServerURL;
	NSURL* _userProvidedBundleMountPathURL;
	NSURL* _userProvidedImagePathURL;

}

@property (nonatomic,retain) OS_remote_device * remoteDevice;                     //@synthesize remoteDevice=_remoteDevice - In the implementation block
@property (nonatomic,retain) NSURL * bundlePathURL;                               //@synthesize bundlePathURL=_bundlePathURL - In the implementation block
@property (nonatomic,retain) NSDictionary * mountedVolumeEntry;                   //@synthesize mountedVolumeEntry=_mountedVolumeEntry - In the implementation block
@property (nonatomic,retain) NSURL * imagePathURL;                                //@synthesize imagePathURL=_imagePathURL - In the implementation block
@property (nonatomic,retain) NSString * imageVariant;                             //@synthesize imageVariant=_imageVariant - In the implementation block
@property (nonatomic,retain) NSURL * trustCacheURL;                               //@synthesize trustCacheURL=_trustCacheURL - In the implementation block
@property (nonatomic,retain) NSNumber * ecid;                                     //@synthesize ecid=_ecid - In the implementation block
@property (nonatomic,retain) NSNumber * chipID;                                   //@synthesize chipID=_chipID - In the implementation block
@property (nonatomic,retain) NSNumber * boardID;                                  //@synthesize boardID=_boardID - In the implementation block
@property (nonatomic,retain) NSNumber * securityDomain;                           //@synthesize securityDomain=_securityDomain - In the implementation block
@property (nonatomic,retain) NSNumber * certificateSecurityMode;                  //@synthesize certificateSecurityMode=_certificateSecurityMode - In the implementation block
@property (nonatomic,retain) NSNumber * certificateProductionStatus;              //@synthesize certificateProductionStatus=_certificateProductionStatus - In the implementation block
@property (nonatomic,retain) NSNumber * effectiveSecurityMode;                    //@synthesize effectiveSecurityMode=_effectiveSecurityMode - In the implementation block
@property (nonatomic,retain) NSNumber * effectiveProductionStatus;                //@synthesize effectiveProductionStatus=_effectiveProductionStatus - In the implementation block
@property (nonatomic,retain) NSNumber * image4Supported;                          //@synthesize image4Supported=_image4Supported - In the implementation block
@property (nonatomic,retain) NSData * apNonce;                                    //@synthesize apNonce=_apNonce - In the implementation block
@property (nonatomic,retain) NSData * sepNonce;                                   //@synthesize sepNonce=_sepNonce - In the implementation block
@property (nonatomic,copy) NSString * hardwareModel;                              //@synthesize hardwareModel=_hardwareModel - In the implementation block
@property (nonatomic,copy) NSString * deviceClass;                                //@synthesize deviceClass=_deviceClass - In the implementation block
@property (assign,nonatomic) unsigned digestLength;                               //@synthesize digestLength=_digestLength - In the implementation block
@property (assign,nonatomic) BOOL useCredentials;                                 //@synthesize useCredentials=_useCredentials - In the implementation block
@property (nonatomic,retain) NSURL * signingServerURL;                            //@synthesize signingServerURL=_signingServerURL - In the implementation block
@property (nonatomic,retain) NSURL * userProvidedBundleMountPathURL;              //@synthesize userProvidedBundleMountPathURL=_userProvidedBundleMountPathURL - In the implementation block
@property (nonatomic,retain) NSURL * userProvidedImagePathURL;                    //@synthesize userProvidedImagePathURL=_userProvidedImagePathURL - In the implementation block
@property (assign,nonatomic) BOOL skipLoadingLaunchDaemons;                       //@synthesize skipLoadingLaunchDaemons=_skipLoadingLaunchDaemons - In the implementation block
-(void)dealloc;
-(NSString *)deviceClass;
-(void)setDeviceClass:(NSString *)arg1 ;
-(NSString *)hardwareModel;
-(void)setHardwareModel:(NSString *)arg1 ;
-(unsigned)digestLength;
-(OS_remote_device *)remoteDevice;
-(void)setRemoteDevice:(OS_remote_device *)arg1 ;
-(NSNumber *)chipID;
-(void)setChipID:(NSNumber *)arg1 ;
-(id)digestFileSha1:(id)arg1 error:(id*)arg2 ;
-(id)digestFileSha384:(id)arg1 error:(id*)arg2 ;
-(NSURL *)userProvidedImagePathURL;
-(NSURL *)userProvidedBundleMountPathURL;
-(NSDictionary *)mountedVolumeEntry;
-(void)setImagePathURL:(NSURL *)arg1 ;
-(NSNumber *)boardID;
-(NSNumber *)securityDomain;
-(NSString *)imageVariant;
-(void)setDigestLength:(unsigned)arg1 ;
-(void)setTrustCacheURL:(NSURL *)arg1 ;
-(NSURL *)imagePathURL;
-(NSURL *)trustCacheURL;
-(void)setEcid:(NSNumber *)arg1 ;
-(void)setBoardID:(NSNumber *)arg1 ;
-(void)setSecurityDomain:(NSNumber *)arg1 ;
-(void)setEffectiveSecurityMode:(NSNumber *)arg1 ;
-(void)setEffectiveProductionStatus:(NSNumber *)arg1 ;
-(void)setCertificateSecurityMode:(NSNumber *)arg1 ;
-(void)setCertificateProductionStatus:(NSNumber *)arg1 ;
-(void)setImage4Supported:(NSNumber *)arg1 ;
-(void)setApNonce:(NSData *)arg1 ;
-(void)setSepNonce:(NSData *)arg1 ;
-(NSNumber *)ecid;
-(BOOL)initializeDeviceAttributes:(id*)arg1 ;
-(BOOL)initializeImageProperties:(id*)arg1 ;
-(NSURL *)signingServerURL;
-(BOOL)useCredentials;
-(id)digestFile:(id)arg1 digestLength:(unsigned)arg2 error:(id*)arg3 ;
-(NSNumber *)effectiveProductionStatus;
-(NSNumber *)effectiveSecurityMode;
-(NSNumber *)certificateSecurityMode;
-(NSNumber *)certificateProductionStatus;
-(NSNumber *)image4Supported;
-(NSData *)apNonce;
-(NSData *)sepNonce;
-(BOOL)mountImage:(id)arg1 serverTicket:(id)arg2 imageDigest:(id)arg3 trustCacheURL:(id)arg4 error:(id*)arg5 ;
-(id)initWithBundleURL:(id)arg1 imageVariant:(id)arg2 remoteDevice:(id)arg3 options:(id)arg4 ;
-(BOOL)mountImage:(id*)arg1 ;
-(NSURL *)bundlePathURL;
-(void)setBundlePathURL:(NSURL *)arg1 ;
-(void)setMountedVolumeEntry:(NSDictionary *)arg1 ;
-(void)setImageVariant:(NSString *)arg1 ;
-(void)setUseCredentials:(BOOL)arg1 ;
-(void)setSigningServerURL:(NSURL *)arg1 ;
-(void)setUserProvidedBundleMountPathURL:(NSURL *)arg1 ;
-(void)setUserProvidedImagePathURL:(NSURL *)arg1 ;
-(BOOL)skipLoadingLaunchDaemons;
-(void)setSkipLoadingLaunchDaemons:(BOOL)arg1 ;
@end

