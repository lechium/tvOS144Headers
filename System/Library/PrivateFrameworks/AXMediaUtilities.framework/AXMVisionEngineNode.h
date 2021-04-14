/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <AXMediaUtilities/AXMDescribing.h>

@protocol AXMVisionEngineNodeConnectionDelegate, OS_dispatch_queue;
@class NSString, NSObject;

@interface AXMVisionEngineNode : NSObject <NSSecureCoding, AXMDescribing> {

	BOOL _connected;
	BOOL _enabled;
	id<AXMVisionEngineNodeConnectionDelegate> _delegate;
	NSString* _identifier;
	NSObject*<OS_dispatch_queue> _nodeQueue;

}

@property (assign,getter=isConnected,nonatomic) BOOL connected;                                      //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic,__weak) id<AXMVisionEngineNodeConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> nodeQueue;                                 //@synthesize nodeQueue=_nodeQueue - In the implementation block
@property (nonatomic,readonly) BOOL areDiagnosticsEnabled; 
@property (nonatomic,readonly) BOOL requiresVisionFramework; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                          //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)title;
+(BOOL)isSupported;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<AXMVisionEngineNodeConnectionDelegate>)delegate;
-(void)setDelegate:(id<AXMVisionEngineNodeConnectionDelegate>)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)disconnect;
-(BOOL)isEnabled;
-(BOOL)isConnected;
-(void)setConnected:(BOOL)arg1 ;
-(void)nodeInitialize;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(BOOL)requiresVisionFramework;
-(BOOL)areDiagnosticsEnabled;
-(void)connect:(id)arg1 ;
-(id)axmDescription;
-(void)axmAppendRecursiveDescription:(id)arg1 withIndentation:(long long)arg2 ;
-(NSObject*<OS_dispatch_queue>)nodeQueue;
-(void)freeResources;
-(void)setNodeQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

