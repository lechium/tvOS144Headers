/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSArray, NSString, WFImage, NSDictionary, NSObject, LSApplicationProxy;

@interface ICApp : NSObject {

	BOOL _installed;
	BOOL _checkedInstallStatus;
	NSArray* _schemes;
	NSString* _localizedName;
	WFImage* _icon;
	NSString* _identifier;
	NSDictionary* _definition;
	NSObject*<OS_dispatch_queue> _stateAccessQueue;

}

@property (nonatomic,readonly) LSApplicationProxy * applicationProxy; 
@property (nonatomic,retain) WFImage * icon;                                               //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) BOOL checkedInstallStatus;                                    //@synthesize checkedInstallStatus=_checkedInstallStatus - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> stateAccessQueue;              //@synthesize stateAccessQueue=_stateAccessQueue - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * definition;                                  //@synthesize definition=_definition - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSArray * allBundleIdentifiers; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * localizedName;                                   //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) NSString * shortName; 
@property (nonatomic,readonly) NSString * localizedShortName; 
@property (nonatomic,readonly) NSString * iTunesIdentifier; 
@property (nonatomic,readonly) NSString * iconName; 
@property (nonatomic,readonly) NSArray * schemes;                                          //@synthesize schemes=_schemes - In the implementation block
@property (nonatomic,readonly) NSArray * exportedFileTypes; 
@property (nonatomic,readonly) NSArray * documentTypes; 
@property (nonatomic,readonly) NSArray * documentActions; 
@property (nonatomic,readonly) NSArray * metadata; 
@property (getter=isRestricted,nonatomic,readonly) BOOL restricted; 
@property (getter=isInstalled,nonatomic,readonly) BOOL installed;                          //@synthesize installed=_installed - In the implementation block
+(id)appWithIdentifier:(id)arg1 name:(id)arg2 ;
-(id)initWithApplicationProxy:(id)arg1 ;
-(LSApplicationProxy *)applicationProxy;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(NSString *)bundleIdentifier;
-(NSString *)localizedName;
-(NSArray *)metadata;
-(NSDictionary *)definition;
-(BOOL)isRestricted;
-(BOOL)isInstalled;
-(WFImage *)icon;
-(void)setIcon:(WFImage *)arg1 ;
-(NSString *)localizedShortName;
-(NSString *)iTunesIdentifier;
-(NSString *)shortName;
-(NSString *)iconName;
-(NSArray *)allBundleIdentifiers;
-(NSArray *)documentTypes;
-(void)openFile:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)schemes;
-(id)initWithIdentifier:(id)arg1 definition:(id)arg2 ;
-(id)schemeNamed:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)stateAccessQueue;
-(id)bundleIdentifiersByIdiom;
-(id)localizedString:(id)arg1 identifier:(id)arg2 ;
-(NSArray *)exportedFileTypes;
-(NSArray *)documentActions;
-(void)loadIconWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)determinesInstallStatusViaURLScheme;
-(BOOL)isCurrentlyInstalled;
-(void)resetInstalledStatus;
-(void)updateInstalledStatus;
-(void)openFile:(id)arg1 withAnnotation:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)identifierFromDictionaryForCurrentIdiom:(id)arg1 ;
-(BOOL)checkedInstallStatus;
-(void)setCheckedInstallStatus:(BOOL)arg1 ;
@end

