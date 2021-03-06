/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessageEntryContentView : UIScrollView <CKMessageEntryRichTextViewDelegate, CKMessageEntryViewStyleProtocol, UITextViewDelegate> {
    UIView * _activeView;
    UIButton * _clearPluginButton;
    CKComposition * _composition;
    float  _containerViewLineWidth;
    CKConversation * _conversation;
    BOOL  _ignoreEndEditing;
    BOOL  _isCompositionExpirable;
    float  _maxContentWidthWhenExpanded;
    BOOL  _needsEnsureSelectionVisible;
    BOOL  _needsTextLayout;
    NSString * _overridePlaceholderText;
    BOOL  _pendingShelfPayloadWillAnimateIn;
    float  _placeHolderWidth;
    UIView * _pluginDividerLine;
    UIViewController<CKPluginEntryViewController> * _pluginEntryViewController;
    NSString * _requestedPlaceholderText;
    float  _sendButtonTextInsetWidth;
    IMPluginPayload * _shelfPluginPayload;
    BOOL  _shouldShowSubject;
    int  _style;
    CKMessageEntryTextView * _subjectView;
    UIView * _textAndSubjectDividerLine;
    CKMessageEntryRichTextView * _textView;
}

@property (getter=isActive, nonatomic, readonly) BOOL active;
@property (nonatomic) UIView *activeView;
@property (nonatomic) BOOL balloonColor;
@property (nonatomic, retain) UIButton *clearPluginButton;
@property (nonatomic, retain) CKComposition *composition;
@property (nonatomic) float containerViewLineWidth;
@property (nonatomic, readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentTextAlignmentInsets;
@property (nonatomic) CKConversation *conversation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL ignoreEndEditing;
@property (nonatomic) BOOL isCompositionExpirable;
@property (nonatomic) float maxContentWidthWhenExpanded;
@property (nonatomic) BOOL needsEnsureSelectionVisible;
@property (nonatomic) BOOL needsTextLayout;
@property (nonatomic, retain) NSString *overridePlaceholderText;
@property (nonatomic) BOOL pendingShelfPayloadWillAnimateIn;
@property (nonatomic) float placeHolderWidth;
@property (nonatomic, copy) NSString *placeholderText;
@property (nonatomic, retain) UIView *pluginDividerLine;
@property (nonatomic, retain) UIViewController<CKPluginEntryViewController> *pluginEntryViewController;
@property (nonatomic, readonly) UIView *pluginView;
@property (nonatomic, retain) NSString *requestedPlaceholderText;
@property (nonatomic) float sendButtonTextInsetWidth;
@property (nonatomic, retain) IMPluginPayload *shelfPluginPayload;
@property (nonatomic, readonly) BOOL shouldShowPlugin;
@property (nonatomic) BOOL shouldShowSubject;
@property (getter=isShowingDictationPlaceholder, nonatomic, readonly) BOOL showingDictationPlaceholder;
@property (getter=isSingleLine, nonatomic, readonly) BOOL singleLine;
@property (nonatomic) int style;
@property (nonatomic, retain) CKMessageEntryTextView *subjectView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *textAndSubjectDividerLine;
@property (nonatomic, retain) CKMessageEntryRichTextView *textView;

+ (id)_createSubjectView;
+ (id)_createTextView;

- (void).cxx_destruct;
- (float)_calcuateIdealMaxPluginHeight;
- (void)_layoutDividerLine:(id)arg1 leftInset:(float)arg2 rightInset:(float)arg3 currentYOffset:(float*)arg4;
- (void)_layoutTextView:(id)arg1 currentYOffset:(float*)arg2 originX:(float)arg3 maxWidth:(float)arg4;
- (void)_updateUI;
- (void)acceptAutocorrection;
- (id)activeView;
- (BOOL)balloonColor;
- (id)clearPluginButton;
- (void)clearPluginButtonTapped:(id)arg1;
- (id)composition;
- (void)configureShelfForPluginPayload:(id)arg1;
- (float)containerViewLineWidth;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentTextAlignmentInsets;
- (id)conversation;
- (void)dealloc;
- (void)ensureSelectionVisibleIfNeeded;
- (BOOL)ignoreEndEditing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 shouldShowSubject:(BOOL)arg2;
- (void)invalidateComposition;
- (BOOL)isActive;
- (BOOL)isCompositionExpirable;
- (BOOL)isShowingDictationPlaceholder;
- (BOOL)isSingleLine;
- (void)layoutSubviews;
- (BOOL)makeActive;
- (float)maxContentWidthWhenExpanded;
- (float)maxWidthForPreviewImagesInMessageEntryRichTextView:(id)arg1;
- (void)messageEntryRichTextView:(id)arg1 didTapMediaObject:(id)arg2;
- (void)messageEntryRichTextView:(id)arg1 pastedURL:(id)arg2;
- (BOOL)messageEntryRichTextView:(id)arg1 shouldPasteMediaObjects:(id)arg2;
- (void)messageEntryRichTextViewDidTapHandwritingKey:(id)arg1;
- (void)messageEntryRichTextViewWasTapped:(id)arg1 isLongPress:(BOOL)arg2;
- (BOOL)needsEnsureSelectionVisible;
- (BOOL)needsTextLayout;
- (id)overridePlaceholderText;
- (BOOL)pendingShelfPayloadWillAnimateIn;
- (float)placeHolderWidth;
- (id)placeholderText;
- (id)pluginDividerLine;
- (id)pluginEntryViewController;
- (id)pluginView;
- (void)plugingPayloadWantsResize:(id)arg1;
- (void)prepareForShelfPayloadAnimation;
- (id)requestedPlaceholderText;
- (float)sendButtonTextInsetWidth;
- (void)setActiveView:(id)arg1;
- (void)setBalloonColor:(BOOL)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setClearPluginButton:(id)arg1;
- (void)setComposition:(id)arg1;
- (void)setContainerViewLineWidth:(float)arg1;
- (void)setConversation:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setIgnoreEndEditing:(BOOL)arg1;
- (void)setIsCompositionExpirable:(BOOL)arg1;
- (void)setMaxContentWidthWhenExpanded:(float)arg1;
- (void)setNeedsEnsureSelectionVisible:(BOOL)arg1;
- (void)setNeedsTextLayout:(BOOL)arg1;
- (void)setOverridePlaceholderText:(id)arg1;
- (void)setPendingShelfPayloadWillAnimateIn:(BOOL)arg1;
- (void)setPlaceHolderWidth:(float)arg1;
- (void)setPlaceholderText:(id)arg1;
- (void)setPluginDividerLine:(id)arg1;
- (void)setPluginEntryViewController:(id)arg1;
- (void)setRequestedPlaceholderText:(id)arg1;
- (void)setSendButtonTextInsetWidth:(float)arg1;
- (void)setShelfPluginPayload:(id)arg1;
- (void)setShouldShowSubject:(BOOL)arg1;
- (void)setStyle:(int)arg1;
- (void)setSubjectView:(id)arg1;
- (void)setTextAndSubjectDividerLine:(id)arg1;
- (void)setTextView:(id)arg1;
- (id)shelfPluginPayload;
- (BOOL)shouldLayoutPluginEdgeToEdge;
- (BOOL)shouldShowClearButton;
- (BOOL)shouldShowPlugin;
- (BOOL)shouldShowSubject;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (int)style;
- (id)subjectView;
- (id)textAndSubjectDividerLine;
- (id)textView;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (BOOL)textViewShouldBeginEditing:(id)arg1;

@end
