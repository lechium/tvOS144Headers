/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreRecognition/CoreRecognition-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@protocol CRCameraReaderDelegate, OS_dispatch_semaphore, OS_dispatch_queue, CRCaptureSessionManager;
@class NSArray, UIColor, CRBoxLayer, DiagnosticHUDLayer, NSString, NSDate, NSPointerArray, CRPollingTimer, NSObject, NSMutableDictionary, CRAlignmentLayer, UIActivityIndicatorView, UITapGestureRecognizer, NSMutableArray, NSDictionary, NSCache, CRMLCCModel, CRImageReader, CATextLayer;

@interface CRCameraReader : UIViewController <CALayerDelegate> {

	BOOL _hidePlacementText;
	BOOL _enableAltIDCardScan;
	BOOL _configPresentCentered;
	BOOL _isQRCode;
	BOOL _codeInverted;
	BOOL _didSendEndOrCancel;
	BOOL _didSendFindBox;
	BOOL _configUseJPEGForColor;
	BOOL _configUseFastScanning;
	BOOL _previousIdleState;
	BOOL _sessionIsStopping;
	BOOL _continousMode;
	BOOL _captureMode;
	BOOL _showDiagnosticHUD;
	float _borderPaddingIDCard;
	float _ocrOverlayBackgroundOpacity;
	NSArray* _outputObjectTypes;
	id<CRCameraReaderDelegate> _callbackDelegate;
	UIColor* _maskColor;
	UIColor* _maskOutlineColor;
	UIColor* _placementTextColor;
	UIColor* _capturedTextColor;
	CVBufferRef _correctedCardBuffer;
	double _configDemoSpeed;
	CRBoxLayer* _boxLayer;
	DiagnosticHUDLayer* _diagnosticHUDLayer;
	NSArray* _foundPoints;
	NSString* _foundCode;
	NSString* _previousCode;
	NSDate* _codePresented;
	unsigned long long _imagesToCapture;
	NSPointerArray* _captureBuffer;
	CRPollingTimer* _boxLayerHideTimer;
	opaqueCMSampleBufferRef _lastBuffer;
	NSObject*<OS_dispatch_semaphore> _processingImage;
	NSMutableDictionary* _cardNumberCounts;
	NSMutableDictionary* _cardholderCounts;
	NSMutableDictionary* _expirationDateCounts;
	NSMutableDictionary* _pinnedFoundInfo;
	CRAlignmentLayer* _alignmentLayer;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	UIActivityIndicatorView* _activityIndicator;
	UITapGestureRecognizer* _tapGestureRecognizer;
	NSMutableArray* _dateCutRects;
	NSMutableArray* _nameCutRects;
	NSDictionary* _contactsCache;
	NSCache* _previousContactMatches;
	CRMLCCModel* _flatPrintedModel;
	CRMLCCModel* _embossedNumberModel;
	CRMLCCModel* _embossedExpirationModel;
	CRMLCCModel* _embossedCardholderModel;
	NSMutableArray* _cardBlurValues;
	NSMutableDictionary* _optionsDictionary;
	CRImageReader* _ocrImageReader;
	CATextLayer* _overlayTextLayer;
	NSMutableArray* _textDetectorRTFeedback;
	NSString* _ocrOverlayFontName;
	unsigned long long _captureCount;
	double _sessionTimeout;
	long long _whiteBalanceMode;
	long long _focusMode;
	long long _exposureMode;
	long long _torchMode;
	NSString* _cameraMode;
	long long _cameraPosition;
	id<CRCaptureSessionManager> _sessionManager;
	SCD_Struct_CR6 _sessionStarted;
	SCD_Struct_CR6 _pointsFound;
	SCD_Struct_CR6 _lastSendFindBox;
	SCD_Struct_CR6 _lastFieldFoundTime;

}

@property (assign) CVBufferRef correctedCardBuffer;                                //@synthesize correctedCardBuffer=_correctedCardBuffer - In the implementation block
@property (assign) BOOL configPresentCentered;                                     //@synthesize configPresentCentered=_configPresentCentered - In the implementation block
@property (assign) double configDemoSpeed;                                         //@synthesize configDemoSpeed=_configDemoSpeed - In the implementation block
@property (retain) CRBoxLayer * boxLayer;                                          //@synthesize boxLayer=_boxLayer - In the implementation block
@property (retain) DiagnosticHUDLayer * diagnosticHUDLayer;                        //@synthesize diagnosticHUDLayer=_diagnosticHUDLayer - In the implementation block
@property (retain) NSArray * foundPoints;                                          //@synthesize foundPoints=_foundPoints - In the implementation block
@property (retain) NSString * foundCode;                                           //@synthesize foundCode=_foundCode - In the implementation block
@property (assign) BOOL isQRCode;                                                  //@synthesize isQRCode=_isQRCode - In the implementation block
@property (retain) NSString * previousCode;                                        //@synthesize previousCode=_previousCode - In the implementation block
@property (assign) SCD_Struct_CR6 sessionStarted;                                  //@synthesize sessionStarted=_sessionStarted - In the implementation block
@property (assign) SCD_Struct_CR6 pointsFound;                                     //@synthesize pointsFound=_pointsFound - In the implementation block
@property (retain) NSDate * codePresented;                                         //@synthesize codePresented=_codePresented - In the implementation block
@property (assign) BOOL codeInverted;                                              //@synthesize codeInverted=_codeInverted - In the implementation block
@property (assign) BOOL didSendEndOrCancel;                                        //@synthesize didSendEndOrCancel=_didSendEndOrCancel - In the implementation block
@property (assign) BOOL didSendFindBox;                                            //@synthesize didSendFindBox=_didSendFindBox - In the implementation block
@property (assign) SCD_Struct_CR6 lastSendFindBox;                                 //@synthesize lastSendFindBox=_lastSendFindBox - In the implementation block
@property (assign) unsigned long long imagesToCapture;                             //@synthesize imagesToCapture=_imagesToCapture - In the implementation block
@property (assign) BOOL configUseJPEGForColor;                                     //@synthesize configUseJPEGForColor=_configUseJPEGForColor - In the implementation block
@property (retain) NSPointerArray * captureBuffer;                                 //@synthesize captureBuffer=_captureBuffer - In the implementation block
@property (retain) CRPollingTimer * boxLayerHideTimer;                             //@synthesize boxLayerHideTimer=_boxLayerHideTimer - In the implementation block
@property (assign) BOOL configUseFastScanning;                                     //@synthesize configUseFastScanning=_configUseFastScanning - In the implementation block
@property (assign) opaqueCMSampleBufferRef lastBuffer;                             //@synthesize lastBuffer=_lastBuffer - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> processingImage;               //@synthesize processingImage=_processingImage - In the implementation block
@property (retain) NSMutableDictionary * cardNumberCounts;                         //@synthesize cardNumberCounts=_cardNumberCounts - In the implementation block
@property (retain) NSMutableDictionary * cardholderCounts;                         //@synthesize cardholderCounts=_cardholderCounts - In the implementation block
@property (retain) NSMutableDictionary * expirationDateCounts;                     //@synthesize expirationDateCounts=_expirationDateCounts - In the implementation block
@property (retain) NSMutableDictionary * pinnedFoundInfo;                          //@synthesize pinnedFoundInfo=_pinnedFoundInfo - In the implementation block
@property (assign) SCD_Struct_CR6 lastFieldFoundTime;                              //@synthesize lastFieldFoundTime=_lastFieldFoundTime - In the implementation block
@property (retain) CRAlignmentLayer * alignmentLayer;                              //@synthesize alignmentLayer=_alignmentLayer - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> processingQueue;                   //@synthesize processingQueue=_processingQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> delegateQueue;                     //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (__weak) id<CRCameraReaderDelegate> callbackDelegate;                    //@synthesize callbackDelegate=_callbackDelegate - In the implementation block
@property (retain) UIActivityIndicatorView * activityIndicator;                    //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (retain) UITapGestureRecognizer * tapGestureRecognizer;                  //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (assign) BOOL previousIdleState;                                         //@synthesize previousIdleState=_previousIdleState - In the implementation block
@property (retain) NSMutableArray * dateCutRects;                                  //@synthesize dateCutRects=_dateCutRects - In the implementation block
@property (retain) NSMutableArray * nameCutRects;                                  //@synthesize nameCutRects=_nameCutRects - In the implementation block
@property (retain) NSDictionary * contactsCache;                                   //@synthesize contactsCache=_contactsCache - In the implementation block
@property (retain) NSCache * previousContactMatches;                               //@synthesize previousContactMatches=_previousContactMatches - In the implementation block
@property (assign) BOOL sessionIsStopping;                                         //@synthesize sessionIsStopping=_sessionIsStopping - In the implementation block
@property (retain) CRMLCCModel * flatPrintedModel;                                 //@synthesize flatPrintedModel=_flatPrintedModel - In the implementation block
@property (retain) CRMLCCModel * embossedNumberModel;                              //@synthesize embossedNumberModel=_embossedNumberModel - In the implementation block
@property (retain) CRMLCCModel * embossedExpirationModel;                          //@synthesize embossedExpirationModel=_embossedExpirationModel - In the implementation block
@property (retain) CRMLCCModel * embossedCardholderModel;                          //@synthesize embossedCardholderModel=_embossedCardholderModel - In the implementation block
@property (retain) NSMutableArray * cardBlurValues;                                //@synthesize cardBlurValues=_cardBlurValues - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * optionsDictionary;              //@synthesize optionsDictionary=_optionsDictionary - In the implementation block
@property (nonatomic,retain) CRImageReader * ocrImageReader;                       //@synthesize ocrImageReader=_ocrImageReader - In the implementation block
@property (nonatomic,retain) CATextLayer * overlayTextLayer;                       //@synthesize overlayTextLayer=_overlayTextLayer - In the implementation block
@property (nonatomic,retain) NSMutableArray * textDetectorRTFeedback;              //@synthesize textDetectorRTFeedback=_textDetectorRTFeedback - In the implementation block
@property (retain) NSString * ocrOverlayFontName;                                  //@synthesize ocrOverlayFontName=_ocrOverlayFontName - In the implementation block
@property (assign) float ocrOverlayBackgroundOpacity;                              //@synthesize ocrOverlayBackgroundOpacity=_ocrOverlayBackgroundOpacity - In the implementation block
@property (assign) BOOL continousMode;                                             //@synthesize continousMode=_continousMode - In the implementation block
@property (getter=isCaptureMode) BOOL captureMode;                                 //@synthesize captureMode=_captureMode - In the implementation block
@property (assign) unsigned long long captureCount;                                //@synthesize captureCount=_captureCount - In the implementation block
@property (assign) double sessionTimeout;                                          //@synthesize sessionTimeout=_sessionTimeout - In the implementation block
@property (assign) long long whiteBalanceMode;                                     //@synthesize whiteBalanceMode=_whiteBalanceMode - In the implementation block
@property (assign) long long focusMode;                                            //@synthesize focusMode=_focusMode - In the implementation block
@property (assign) long long exposureMode;                                         //@synthesize exposureMode=_exposureMode - In the implementation block
@property (assign) long long torchMode;                                            //@synthesize torchMode=_torchMode - In the implementation block
@property (copy) NSString * cameraMode;                                            //@synthesize cameraMode=_cameraMode - In the implementation block
@property (assign) long long cameraPosition;                                       //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (assign) BOOL showDiagnosticHUD;                                         //@synthesize showDiagnosticHUD=_showDiagnosticHUD - In the implementation block
@property (retain) id<CRCaptureSessionManager> sessionManager;                     //@synthesize sessionManager=_sessionManager - In the implementation block
@property (copy) NSArray * outputObjectTypes;                                      //@synthesize outputObjectTypes=_outputObjectTypes - In the implementation block
@property (assign) BOOL hidePlacementText;                                         //@synthesize hidePlacementText=_hidePlacementText - In the implementation block
@property (readonly) long long currentCameraIdentifier; 
@property (nonatomic,copy) UIColor * maskColor;                                    //@synthesize maskColor=_maskColor - In the implementation block
@property (nonatomic,copy) UIColor * maskOutlineColor;                             //@synthesize maskOutlineColor=_maskOutlineColor - In the implementation block
@property (nonatomic,copy) UIColor * placementTextColor;                           //@synthesize placementTextColor=_placementTextColor - In the implementation block
@property (nonatomic,copy) UIColor * capturedTextColor;                            //@synthesize capturedTextColor=_capturedTextColor - In the implementation block
@property (assign) BOOL enableAltIDCardScan;                                       //@synthesize enableAltIDCardScan=_enableAltIDCardScan - In the implementation block
@property (assign) float borderPaddingIDCard;                                      //@synthesize borderPaddingIDCard=_borderPaddingIDCard - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)supportedCameraCount;
+(void)loadFonts;
+(id)findCodeInImage:(vImage_Buffer*)arg1 maxStage:(unsigned long long)arg2 outputObjectTypes:(id)arg3 ;
+(id)extractCardImage:(id)arg1 fromPixelBuffer:(CVBufferRef)arg2 withCardBuffer:(CVBufferRef)arg3 withPoints:(id)arg4 cameraIntrinsicData:(id)arg5 ;
+(id)extractCardImage:(id)arg1 fromPixelBuffer:(CVBufferRef)arg2 withCardBuffer:(CVBufferRef)arg3 withPoints:(id)arg4 cameraIntrinsicData:(id)arg5 padding:(float)arg6 inputOrientation:(int)arg7 ;
+(id)extractCardImage:(id)arg1 fromPixelBuffer:(CVBufferRef)arg2 withCardBuffer:(CVBufferRef)arg3 cameraIntrinsicData:(id)arg4 ;
+(CGRect)uniformPadRect:(CGRect)arg1 widthPadding:(float)arg2 heightPadding:(float)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 ;
+(CGRect)aspectRatioPaddedRect:(CGRect)arg1 expectedWidth:(unsigned long long)arg2 height:(unsigned long long)arg3 orientation:(unsigned)arg4 ;
+(id)targetRectsForImage:(id)arg1 ;
+(id)findCodeInImage:(vImage_Buffer*)arg1 maxStage:(unsigned long long)arg2 roi:(CGRect)arg3 outputObjectTypes:(id)arg4 ;
+(unsigned long long)supportedCameraCountForTypes:(id)arg1 ;
+(id)findCodeInImage:(vImage_Buffer*)arg1 maxStage:(unsigned long long)arg2 ;
+(id)findCodeInImage:(vImage_Buffer*)arg1 maxStage:(unsigned long long)arg2 roi:(CGRect)arg3 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)cancel;
-(void)start;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id)initWithOptions:(id)arg1 ;
-(void)setExposureMode:(long long)arg1 ;
-(long long)exposureMode;
-(void)loadView;
-(NSMutableDictionary *)optionsDictionary;
-(void)startSession;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setOutputObjectTypes:(NSArray *)arg1 ;
-(long long)cameraPosition;
-(UIActivityIndicatorView *)activityIndicator;
-(void)toggleCamera;
-(void)switchToCamera:(long long)arg1 ;
-(void)switchToCameraWithDeviceID:(id)arg1 ;
-(void)setCameraPosition:(long long)arg1 ;
-(NSString *)cameraMode;
-(void)setCameraMode:(NSString *)arg1 ;
-(long long)whiteBalanceMode;
-(void)setWhiteBalanceMode:(long long)arg1 ;
-(long long)focusMode;
-(void)setFocusMode:(long long)arg1 ;
-(long long)torchMode;
-(void)setTorchMode:(long long)arg1 ;
-(id)currentDeviceID;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 options:(id)arg3 ;
-(void)setOptionsDictionary:(NSMutableDictionary *)arg1 ;
-(void)setConfigPresentCentered:(BOOL)arg1 ;
-(void)setConfigDemoSpeed:(double)arg1 ;
-(void)setConfigUseFastScanning:(BOOL)arg1 ;
-(void)setConfigUseJPEGForColor:(BOOL)arg1 ;
-(void)setShowDiagnosticHUD:(BOOL)arg1 ;
-(void)setCaptureCount:(unsigned long long)arg1 ;
-(void)setCaptureBuffer:(NSPointerArray *)arg1 ;
-(void)setSessionTimeout:(double)arg1 ;
-(void)setHidePlacementText:(BOOL)arg1 ;
-(void)setEnableAltIDCardScan:(BOOL)arg1 ;
-(void)setProcessingImage:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setLastBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setBorderPaddingIDCard:(float)arg1 ;
-(CRAlignmentLayer *)alignmentLayer;
-(void)setCallbackDelegate:(id<CRCameraReaderDelegate>)arg1 ;
-(void)setSessionManager:(id<CRCaptureSessionManager>)arg1 ;
-(id<CRCaptureSessionManager>)sessionManager;
-(NSArray *)outputObjectTypes;
-(void)setAlignmentLayer:(CRAlignmentLayer *)arg1 ;
-(BOOL)hidePlacementText;
-(BOOL)showDiagnosticHUD;
-(void)setDiagnosticHUDLayer:(DiagnosticHUDLayer *)arg1 ;
-(DiagnosticHUDLayer *)diagnosticHUDLayer;
-(void)setPreviousContactMatches:(NSCache *)arg1 ;
-(void)setEmbossedNumberModel:(CRMLCCModel *)arg1 ;
-(void)setEmbossedCardholderModel:(CRMLCCModel *)arg1 ;
-(void)setEmbossedExpirationModel:(CRMLCCModel *)arg1 ;
-(void)setFlatPrintedModel:(CRMLCCModel *)arg1 ;
-(void)orientationDidChange:(id)arg1 ;
-(void)hideBoxLayer;
-(void)setBoxLayerHideTimer:(CRPollingTimer *)arg1 ;
-(BOOL)isCaptureMode;
-(void)handleTapFrom:(id)arg1 ;
-(NSDictionary *)contactsCache;
-(void)updateContactsCache:(id)arg1 ;
-(CRPollingTimer *)boxLayerHideTimer;
-(void)stopSession;
-(CVBufferRef)createFastAccessPixelBufferWithSize:(CGSize)arg1 videoFormat:(int)arg2 ;
-(void)removeLayerTree;
-(void)releaseCorrectedCardBuffer;
-(CRBoxLayer *)boxLayer;
-(void)setBoxLayer:(CRBoxLayer *)arg1 ;
-(void)setupInitialLayerConfiguration;
-(void)captureImage;
-(unsigned long long)captureCount;
-(unsigned long long)imagesToCapture;
-(void)setImagesToCapture:(unsigned long long)arg1 ;
-(void)sendDidCancel;
-(void)setFoundCode:(NSString *)arg1 ;
-(void)setIsQRCode:(BOOL)arg1 ;
-(void)setPreviousCode:(NSString *)arg1 ;
-(void)setSessionStarted:(SCD_Struct_CR6)arg1 ;
-(void)setPointsFound:(SCD_Struct_CR6)arg1 ;
-(void)setCodePresented:(NSDate *)arg1 ;
-(void)setCodeInverted:(BOOL)arg1 ;
-(void)setDidSendEndOrCancel:(BOOL)arg1 ;
-(void)setDidSendFindBox:(BOOL)arg1 ;
-(void)setLastSendFindBox:(SCD_Struct_CR6)arg1 ;
-(void)setCardNumberCounts:(NSMutableDictionary *)arg1 ;
-(void)setCardholderCounts:(NSMutableDictionary *)arg1 ;
-(void)setExpirationDateCounts:(NSMutableDictionary *)arg1 ;
-(void)setPinnedFoundInfo:(NSMutableDictionary *)arg1 ;
-(void)setLastFieldFoundTime:(SCD_Struct_CR6)arg1 ;
-(void)setNameCutRects:(NSMutableArray *)arg1 ;
-(void)setDateCutRects:(NSMutableArray *)arg1 ;
-(void)setCardBlurValues:(NSMutableArray *)arg1 ;
-(void)setPreviousIdleState:(BOOL)arg1 ;
-(void)setSessionIsStopping:(BOOL)arg1 ;
-(BOOL)previousIdleState;
-(NSCache *)previousContactMatches;
-(NSPointerArray *)captureBuffer;
-(id)generateStringFromDate:(id)arg1 ;
-(BOOL)configUseJPEGForColor;
-(id<CRCameraReaderDelegate>)callbackDelegate;
-(void)flashScreenAndPlayCaptureSound;
-(NSString *)foundCode;
-(BOOL)isQRCode;
-(NSArray *)foundPoints;
-(NSString *)previousCode;
-(void)setFoundPoints:(NSArray *)arg1 ;
-(SCD_Struct_CR6)pointsFound;
-(void)sendDidEndWithErrorDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 ;
-(void)primeBoxLayerHideTimerWithFrameTime:(SCD_Struct_CR6)arg1 ;
-(BOOL)configPresentCentered;
-(BOOL)codeInverted;
-(opaqueCMSampleBufferRef)lastBuffer;
-(void)findCodeInSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)cameraIntrinsicDataForSampleBuffer:(opaqueCMSampleBufferRef)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 ;
-(void)findObjects:(id)arg1 inPixelBuffer:(CVBufferRef)arg2 cameraIntrinsicData:(id)arg3 frameTime:(SCD_Struct_CR6)arg4 ;
-(void)findOCRTextObjects:(id)arg1 inPixelBuffer:(CVBufferRef)arg2 attachments:(id)arg3 frameTime:(SCD_Struct_CR6)arg4 ;
-(void)sendDidEndWithInfo:(id)arg1 ;
-(void)pauseBoxLayerHideTimer;
-(void)animatePresentCodeAtFrameTime:(SCD_Struct_CR6)arg1 ;
-(void)showTextDetectorObjects:(id)arg1 ;
-(CRImageReader *)ocrImageReader;
-(void)sendProvideOverlayObjects:(id)arg1 ;
-(id)findObjectsEmbossed:(id)arg1 inImage:(id)arg2 ;
-(NSMutableDictionary *)pinnedFoundInfo;
-(CVBufferRef)correctedCardBuffer;
-(float)borderPaddingIDCard;
-(BOOL)enableAltIDCardScan;
-(NSMutableArray *)cardBlurValues;
-(void)sendDidEndAnimation;
-(void)updatePinnedInfoFrameIndex;
-(NSMutableArray *)nameCutRects;
-(NSMutableArray *)dateCutRects;
-(NSMutableDictionary *)cardNumberCounts;
-(void)sendDidFindTarget:(id)arg1 frameTime:(SCD_Struct_CR6)arg2 ;
-(void)mergeInfo:(id)arg1 intoFindInfo:(id)arg2 ;
-(id)findObjectsFlat:(id)arg1 inImage:(id)arg2 numberRects:(id)arg3 invert:(BOOL)arg4 ;
-(NSMutableDictionary *)cardholderCounts;
-(void)setFirstTimeFrameIndexForPinnedField:(id)arg1 ;
-(NSMutableDictionary *)expirationDateCounts;
-(SCD_Struct_CR6)lastFieldFoundTime;
-(void)sendDidRecognizeNewObjects:(id)arg1 ;
-(unsigned long long)getFirstTimeFrameIndexForPinnedField:(id)arg1 ;
-(id)findCCObjectsEmbossed:(id)arg1 inImage:(id)arg2 numberRects:(id)arg3 nameRects:(id)arg4 dateRects:(id)arg5 ;
-(id)findCCNameInImageEmbossed:(id)arg1 ;
-(id)findCCExpDateInImageEmbossed:(id)arg1 ;
-(id)findCCResultsInImageFlat:(id)arg1 usingTextFeatures:(id)arg2 invert:(BOOL)arg3 ;
-(id)findCCNumberInImageEmbossed:(id)arg1 ;
-(id)findCCNumberInImageEmbossed:(id)arg1 withFinalDigit:(id)arg2 ;
-(id)findCCObjectEmbossed:(id)arg1 inImage:(id)arg2 forRect:(id)arg3 ;
-(CRMLCCModel *)flatPrintedModel;
-(CRMLCCModel *)embossedNumberModel;
-(CRMLCCModel *)embossedExpirationModel;
-(id)extractFinalDigitStringFromNumbers:(id)arg1 ;
-(CRMLCCModel *)embossedCardholderModel;
-(double)configDemoSpeed;
-(CGRect)boxLayerPresentationFrame;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(NSDate *)codePresented;
-(void)sendDidDisplayMessageStyle:(long long)arg1 ;
-(BOOL)didSendEndOrCancel;
-(float)ocrOverlayBackgroundOpacity;
-(NSString *)ocrOverlayFontName;
-(id)attributedStringWithFrame:(CGSize)arg1 withFont:(id)arg2 withString:(id)arg3 color:(CGColorRef)arg4 ;
-(NSMutableArray *)textDetectorRTFeedback;
-(id)createTextLayerForRecognizedObject:(id)arg1 ;
-(BOOL)didSendFindBox;
-(SCD_Struct_CR6)lastSendFindBox;
-(void)sendDidEndWithError:(id)arg1 ;
-(void)createCorrectedCardBuffer;
-(void)setOcrImageReader:(CRImageReader *)arg1 ;
-(void)setTextDetectorRTFeedback:(NSMutableArray *)arg1 ;
-(void)setOcrOverlayBackgroundOpacity:(float)arg1 ;
-(void)setOcrOverlayFontName:(NSString *)arg1 ;
-(void)setContactsCache:(NSDictionary *)arg1 ;
-(void)setMaskColor:(UIColor *)arg1 ;
-(void)setMaskOutlineColor:(UIColor *)arg1 ;
-(void)aetPlacementTextColor:(id)arg1 ;
-(void)setCapturedTextColor:(UIColor *)arg1 ;
-(long long)currentCameraIdentifier;
-(void)captureImageFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)findObjects:(id)arg1 inImage:(id)arg2 properties:(id)arg3 ;
-(void)findIDObjects:(id)arg1 inPixelBuffer:(CVBufferRef)arg2 cameraIntrinsicData:(id)arg3 frameTime:(SCD_Struct_CR6)arg4 ;
-(void)showMessage:(id)arg1 color:(id)arg2 style:(long long)arg3 duration:(double)arg4 ;
-(void)reportAcceptedString:(id)arg1 forOutput:(id)arg2 withClientID:(id)arg3 ;
-(UIColor *)maskColor;
-(UIColor *)maskOutlineColor;
-(UIColor *)placementTextColor;
-(void)setPlacementTextColor:(UIColor *)arg1 ;
-(UIColor *)capturedTextColor;
-(void)setCorrectedCardBuffer:(CVBufferRef)arg1 ;
-(SCD_Struct_CR6)sessionStarted;
-(BOOL)configUseFastScanning;
-(NSObject*<OS_dispatch_semaphore>)processingImage;
-(BOOL)sessionIsStopping;
-(CATextLayer *)overlayTextLayer;
-(void)setOverlayTextLayer:(CATextLayer *)arg1 ;
-(BOOL)continousMode;
-(void)setContinousMode:(BOOL)arg1 ;
-(void)setCaptureMode:(BOOL)arg1 ;
-(double)sessionTimeout;
@end

