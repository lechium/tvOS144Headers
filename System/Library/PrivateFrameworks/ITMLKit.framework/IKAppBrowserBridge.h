/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/IKDOMFeature.h>

@protocol IKAppBrowser;
@class IKAppContext, NSString;

@interface IKAppBrowserBridge : NSObject <IKDOMFeature> {

	double _cornerRadius;
	double _interitemSpacing;
	IKAppContext* _appContext;
	NSString* _featureName;
	id<IKAppBrowser> _appBrowser;
	UIEdgeInsets _maskInset;

}

@property (assign,nonatomic) double cornerRadius;                             //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double interitemSpacing;                         //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets maskInset;                          //@synthesize maskInset=_maskInset - In the implementation block
@property (assign,nonatomic,__weak) id<IKAppBrowser> appBrowser;              //@synthesize appBrowser=_appBrowser - In the implementation block
@property (nonatomic,copy,readonly) NSString * featureName;                   //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;              //@synthesize appContext=_appContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)makeFeatureJSObjectForFeature:(id)arg1 ;
-(void)present;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(NSString *)featureName;
-(IKAppContext *)appContext;
-(id)initWithDOMNode:(id)arg1 featureName:(id)arg2 ;
-(id<IKAppBrowser>)appBrowser;
-(double)interitemSpacing;
-(UIEdgeInsets)maskInset;
-(void)setInteritemSpacing:(double)arg1 ;
-(void)setMaskInset:(UIEdgeInsets)arg1 ;
-(void)setAppBrowser:(id<IKAppBrowser>)arg1 ;
@end

